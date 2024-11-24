//以下代码是基于"猜数字.cpp"由豆包AI优化后shengcheng
#include <iostream>
#include <random>
#include <string>
#include <limits>
#include <locale>
#include <codecvt>
#include <algorithm>
#include <vector>
#include <functional>
#include <cstdlib>

// 函数前置声明
int generateRandomNumber(int min, int max);
bool validateAndGetRange(int& min, int& max);
bool validateGuess(int min, int& guessNum, int max);
bool isWideStringNumber(const std::wstring& wideStr);

// 用于将宽字符串转换为窄字符串（在Windows下处理UTF-8输入输出）
std::string wideToNarrow(const std::wstring& wideStr) {
    using convert_type = std::codecvt_utf8<wchar_t>;
    std::wstring_convert<convert_type, wchar_t> converter;
    return converter.to_bytes(wideStr);
}

// 定义一些常量字符串用于输出提示信息
const std::wstring INPUT_GUESS_PROMPT = L"请输入你猜测的数字(";
const std::wstring INPUT_RANGE_MIN_PROMPT = L"请输入随机数的最小值：";
const std::wstring INPUT_RANGE_MAX_PROMPT = L"请输入随机数的最大值：";
const std::wstring GUESS_TOO_SMALL = L"猜小了！";
const std::wstring GUESS_TOO_LARGE = L"猜大了！";
const std::wstring GUESS_CORRECT = L"恭喜你猜对了！";
const std::wstring CONTINUE_PROMPT = L"是否继续游戏?(y/n):";

// 在全局或合适的作用域定义一个容器来存储预生成的随机数
std::vector<int> preGeneratedRandomNumbers;

// 函数来预生成随机数并填充容器
void preGenerateRandomNumbers(int minRange, int maxRange, size_t numToGenerate) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(minRange, maxRange);

    preGeneratedRandomNumbers.clear();
    for (size_t i = 0; i < numToGenerate; ++i) {
        preGeneratedRandomNumbers.push_back(dis(gen));
    }
}

int main() {
    // 设置控制台编码为UTF-8（Windows下）
    std::system("chcp 65001");

    // 预生成随机数，这里示例预生成100个1到100之间的随机数
    preGenerateRandomNumbers(1, 100, 100);

    int min, max;
    int randomNumber;
    int guessNum;
    std::wstring inputWstr;

    std::wcout << L"==========猜数字游戏==========" << std::endl;
    while (true) {
        // 获取并验证随机数的取值范围
        if (!validateAndGetRange(min, max)) {
            continue;
        }

        randomNumber = generateRandomNumber(min, max);

        while (true) {
            std::wcout << INPUT_GUESS_PROMPT << min << L"~" << max << L"): ";
            std::wcin >> inputWstr;

            // 验证猜测的数字是否符合要求
            if (!validateGuess(min, guessNum, max)) {
                continue;
            }

            if (guessNum < randomNumber) {
                std::wcout << GUESS_TOO_SMALL << std::endl;
                min = guessNum;
            } else if (guessNum > randomNumber) {
                std::wcout << GUESS_TOO_LARGE << std::endl;
                max = guessNum;
            } else if (guessNum == randomNumber) {
                std::wcout << GUESS_CORRECT << std::endl;
                break;
            }
        }

        std::wcout << CONTINUE_PROMPT << std::endl;

        // 读取用户输入的宽字符串
        std::wstring userChoiceWstr;
        std::wcin >> userChoiceWstr;

        // 将宽字符串转换为窄字符串
        std::string userChoiceStr = wideToNarrow(userChoiceWstr);

        // 判断是否为 'n'
        if (userChoiceStr == "n") {
            break;
        }
    }

    std::wcout << L"=============================" << std::endl;

    return 0;
}

// 生成随机数的函数，从预生成的随机数容器中选取
int generateRandomNumber(int min, int max) {
    static size_t index = 0;
    if (index >= preGeneratedRandomNumbers.size()) {
        index = 0;
    }
    return preGeneratedRandomNumbers[index++];
}

// 验证并获取随机数取值范围的函数
bool validateAndGetRange(int& min, int& max) {
    std::wstring userMinWstr;
    int errorCount = 0;

    std::wcout << INPUT_RANGE_MIN_PROMPT;
    while (true) {
        std::wcin >> userMinWstr;
        if (!isWideStringNumber(userMinWstr)) {
            std::wcout << L"你输入的不是有效的数字格式，请重新输入。(示例: 49, -18)" << std::endl;
            errorCount++;
            if (errorCount >= 3) {
                std::wcout << L"输入错误次数过多，请重新启动游戏。" << std::endl;
                return false;
            }
            continue;
        }

        // 尝试直接将宽字符串转换为整数
        try {
            min = std::stoi(wideToNarrow(userMinWstr));
            break;
        } catch (...) {
            std::wcout << L"你输入的数字有误!(示例: 49, -18)" << std::endl;
            errorCount++;
            if (errorCount >= 3) {
                std::wcout << L"输入错误次数过多，请重新启动游戏。" << std::endl;
                return false;
            }
            continue;
        }
    }

    std::wcout << INPUT_RANGE_MAX_PROMPT;
    while (true) {
        std::wcin >> userMinWstr;
        if (!isWideStringNumber(userMinWstr)) {
            std::wcout << L"你输入的不是有效的数字格式，请重新输入。(示例: 49, -18)" << std::endl;
            errorCount++;
            if (errorCount >= 3) {
                std::wcout << L"输入错误次数过多，请重新启动游戏。" << std::endl;
                return false;
            }
            continue;
        }

        // 尝试直接将宽字符串转换为整数
        try {
            max = std::stoi(wideToNarrow(userMinWstr));
            if (min >= max) {
                std::wcout << L"最小值应小于最大值，请重新输入。" << std::endl;
                errorCount++;
                if (errorCount >= 3) {
                    std::wcout << L"输入错误次数过多，请重新启动游戏。" << std::endl;
                return false;
                }
                continue;
            }
            break;
        } catch (...) {
            std::wcout << L"你输入的数字有误!(示例: 49, -18)" << std::endl;
            errorCount++;
            if (errorCount >= 3) {
                std::wcout << L"输入错误次数过多，请重新启动游戏。" << std::endl;
                return false;
            }
            continue;
        }
    }

    return true;
}

// 验证猜测数字的函数
bool validateGuess(int min, int& guessNum, int max) {
    std::wstring inputWstr;

    std::wcout << INPUT_GUESS_PROMPT << min << L"~" << max << L"): ";
    while (true) {
        std::wcin >> inputWstr;
        if (!isWideStringNumber(inputWstr)) {
            std::wcout << L"你输入的不是有效的数字格式，请重新输入。(示例: 49, -18)" << std::endl;
            continue;
        }

        // 尝试直接将宽字符串转换为整数
        try {
            guessNum = std::stoi(wideToNarrow(inputWstr));

            if (guessNum < min || guessNum > max) {
                std::wcout << L"你输入的数字超出范围！" << std::endl;
                continue;
            }

            return true;
        } catch (...) {
            std::wcout << L"你输入的数字有误!(示例: 49, -18)" << std::endl;
            continue;
        }
    }
}

// 判断宽字符串是否为有效数字的函数
bool isWideStringNumber(const std::wstring& wideStr) {
    return std::all_of(wideStr.begin(), wideStr.end(), [wideStr](wchar_t c) {
        // 这里简单判断是否在数字字符的Unicode范围（可根据具体需求完善）
        return (c >= L'0' && c <= L'9') || c == L'-' && wideStr.find(L'-') == 0;
    });
}