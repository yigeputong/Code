//While语句练习--猜数字
#include <iostream>
#include <random>

using namespace std;

int getRandomNum(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    return dis(gen);
} 

int main() {

    cout << "==========猜数字游戏==========" << endl;
    while (true) {
        int min;
        int max;
        cout << "请输入随机数的最小值：";
        cin >> min;
        cout << "请输入随机数的最大值：";
        cin >> max;
        int randomNum = getRandomNum(min, max);
        int guessNum;
        while (true) {
            cout << "请输入你猜测的数字(" << min << "~" << max << "):";
            cin >> guessNum;
            if (guessNum == randomNum) {
                cout << "恭喜你猜对了！" << endl;
                break;
            } else if (guessNum < randomNum) {
                cout << "猜小了！" << endl;
                min = guessNum;
            } else if (guessNum > randomNum){
                cout << "猜大了！" << endl;
                max = guessNum;
            } else {
                cout << "你输入的数字有误！" << endl;
            }
        }
        cout << "是否继续游戏?(y/n): ";
        char choice;
        cin >> choice;
        if (choice == 'n') {
            break;
        } else if (choice == 'y') {
            continue;
        } else {
            cout << "你输入的字符有误！" << endl;
        }
    }
    cout << "=============================" << endl;

    return 0;
}