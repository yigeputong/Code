//以下代码是基于"猜数字.cpp"由豆包AI优化后生成
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
bool isWideStringNumber(const std::string& wideStr);

// 定义一些常量字符串用于输出提示信息
const std::string INPUT_GUESS_PROMPT = "请输入你猜测的数字(";
const std::string INPUT_RANGE_MIN_PROMPT = "请输入随机数的最小值：";
const std::string INPUT_RANGE_MAX_PROMPT = "请输入随机数的最大值：";
const std::string GUESS_TOO_SMALL = "猜小了！";
const std::string GUESS_TOO_LARGE = "猜大了！";
const std::string GUESS_CORRECT = "恭喜你猜对了！";
const std::string CONTINUE_PROMPT = "是否继续游戏?(y/n):";

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

    // 预生成随机数，这里示例预生成100个1到100之间的随机数
    preGenerateRandomNumbers(1, 100, 100);

    int min, max;
    int randomNumber;
    int guessNum;
    std::string inputWstr;

    std::cout << "==========猜数字游戏==========" << std::endl;
    while (true) {
        // 获取并验证随机数的取值范围
        if (!validateAndGetRange(min, max)) {
            continue;
        }

        randomNumber = generateRandomNumber(min, max);

        while (true) {
            std::cout << INPUT_GUESS_PROMPT << min << "~" << max << "): ";
            std::cin >> inputWstr;

            // 验证猜测的数字是否符合要求
            if (!validateGuess(min, guessNum, max)) {
                continue;
            }

            if (guessNum < randomNumber) {
                std::cout << GUESS_TOO_SMALL << std::endl;
                min = guessNum;
            } else if (guessNum > randomNumber) {
                std::cout << GUESS_TOO_LARGE << std::endl;
                max = guessNum;
            } else if (guessNum == randomNumber) {
                std::cout << GUESS_CORRECT << std::endl;
                break;
            }
        }

        std::cout << CONTINUE_PROMPT << std::endl;

        // 读取用户输入的宽字符串
        std::string userChoiceWstr;
        std::cin >> userChoiceWstr;

        // 判断是否为 'n'
        if (userChoiceWstr == "n") {
            break;
        }
    }

    std::cout << "=============================" << std::endl;

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
    std::string userMinWstr;
    int errorCount = 0;

    std::cout << INPUT_RANGE_MIN_PROMPT;
    while (true) {
        std::cin >> userMinWstr;
        if (!isWideStringNumber(userMinWstr)) {
            std::cout << "你输入的不是有效的数字格式，请重新输入。(示例: 49, -18)" << std::endl;
            errorCount++;
            if (errorCount >= 3) {
                std::cout << "输入错误次数过多，请重新启动游戏。" << std::endl;
                return false;
            }
            continue;
        }

        // 尝试直接将宽字符串转换为整数
        try {
            min = std::stoi(userMinWstr);
            break;
        } catch (...) {
            std::cout << "你输入的数字有误!(示例: 49, -18)" << std::endl;
            errorCount++;
            if (errorCount >= 3) {
                std::cout << "输入错误次数过多，请重新启动游戏。" << std::endl;
                return false;
            }
            continue;
        }
    }

    std::cout << INPUT_RANGE_MAX_PROMPT;
    while (true) {
        std::cin >> userMinWstr;
        if (!isWideStringNumber(userMinWstr)) {
            std::cout << "你输入的不是有效的数字格式，请重新输入。(示例: 49, -18)" << std::endl;
            errorCount++;
            if (errorCount >= 3) {
                std::cout << "输入错误次数过多，请重新启动游戏。" << std::endl;
                return false;
            }
            continue;
        }

        // 尝试直接将宽字符串转换为整数
        try {
            max = std::stoi(userMinWstr);
            if (min >= max) {
                std::cout << "最小值应小于最大值，请重新输入。" << std::endl;
                errorCount++;
                if (errorCount >= 3) {
                    std::cout << "输入错误次数过多，请重新启动游戏。" << std::endl;
                return false;
                }
                continue;
            }
            break;
        } catch (...) {
            std::cout << "你输入的数字有误!(示例: 49, -18)" << std::endl;
            errorCount++;
            if (errorCount >= 3) {
                std::cout << "输入错误次数过多，请重新启动游戏。" << std::endl;
                return false;
            }
            continue;
        }
    }

    return true;
}

// 验证猜测数字的函数
bool validateGuess(int min, int& guessNum, int max) {
    std::string inputWstr;

    std::cout << INPUT_GUESS_PROMPT << min << "~" << max << "): ";
    while (true) {
        std::cin >> inputWstr;
        if (!isWideStringNumber(inputWstr)) {
            std::cout << "你输入的不是有效的数字格式，请重新输入。(示例: 49, -18)" << std::endl;
            continue;
        }

        // 尝试直接将宽字符串转换为整数
        try {
            guessNum = std::stoi(inputWstr);

            if (guessNum < min || guessNum > max) {
                std::cout << "你输入的数字超出范围！" << std::endl;
                continue;
            }

            return true;
        } catch (...) {
            std::cout << "你输入的数字有误!(示例: 49, -18)" << std::endl;
            continue;
        }
    }
}

// 判断宽字符串是否为有效数字的函数
bool isWideStringNumber(const std::string& wideStr) {
    return std::all_of(wideStr.begin(), wideStr.end(), [wideStr](wchar_t c) {
        // 这里简单判断是否在数字字符的Unicode范围（可根据具体需求完善）
        return (c >= '0' && c <= '9') || c == '-' && wideStr.find(L'-') == 0;
    });
}