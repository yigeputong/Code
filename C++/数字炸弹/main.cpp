#include <iostream>
#include <random>

using namespace std;  // 使用标准命名空间，以便直接使用其中的元素而无需前缀

// 生成指定范围内的随机数
int get_random_number(int min, int max) {
    random_device rd;  // 用于获取随机数种子
    mt19937 gen(rd());  // 随机数生成引擎
    uniform_int_distribution<> dis(min, max);  // 均匀分布的随机数分布器
    return dis(gen);  // 返回生成的随机数
}

int main() {
    system("chcp 65001");  // 设置控制台编码为 UTF-8

    while (1) {  // 只要用户选择再次游戏，就一直循环
        int min_num = 1;  // 随机数的下限
        int max_num = 100;  // 随机数的上限
        int random_num = get_random_number(min_num, max_num);  // 生成随机数
        int user_num = 0;  // 用户输入的数字
        int count = 1;  // 猜测次数

        do {  // 开始猜测循环
            cout << count << ".请输入数字(" << min_num << "~" << max_num << "): ";  // 提示用户输入
            if (!(cin >> user_num) || user_num < min_num || user_num > max_num) {  // 修正：使用 || ，并分别判断范围
                cout << "输入有误，请重新输入" << endl;  // 提示错误
                cin.clear();  // 清除错误标志
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // 忽略无效输入
                continue;  // 重新开始本次循环
            }
            if (user_num < random_num) {  // 如果猜小了
                cout << "猜小了" << endl;  // 提示猜小了
                min_num = user_num;  // 更新下限
                count++;  // 猜测次数加 1
                continue;  // 重新开始本次循环
            } else if (user_num > random_num) {  // 如果猜大了
                cout << "猜大了" << endl;  // 提示猜大了
                max_num = user_num;  // 更新上限
                count++;  // 猜测次数加 1
                continue;  // 重新开始本次循环
            } else if (user_num == random_num) {  // 如果猜对了
                cout << "猜中了, boom!!!" << endl;  // 提示猜对
                break;  // 结束循环
            }
        } while (user_num!= random_num);  // 只要没猜对就继续循环
        cout << "你一共猜了" << count << "次" << endl;  // 输出猜测次数

        while (1) {
            int user_input;  // 用户输入的选择
            cout << "游戏结束，按 1 开始下一局游戏，按 2 退出：";  // 提示选择
            if (!(cin >> user_input) || user_input!= 1 && user_input!= 2) {  // 修正：使用 || ，并正确判断 1 和 2
                cout << "输入有误，请重新输入" << endl;  // 提示错误
                cin.clear();  // 清除错误标志
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // 忽略无效输入
                continue;  // 重新开始本次循环
            } else if (user_input == 1) {
                break;
            } else if (user_input == 2) {
                return 0;
            }
        }
    }
}