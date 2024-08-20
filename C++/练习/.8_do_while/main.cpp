#include <iostream>
#include <random>
using namespace std;
int get_random_num (int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(min, max);
    int random_number = dist(gen);
    return random_number;
}

int main() {
    short num = get_random_num(-32767, 32767);
    int user_num, count = 0;
    cout << "================================================" << endl;
    cout << "我们来玩数字炸弹吧！" << endl;
    do {
        cout << "请输入数字(-32767~32767):";
        cin >> user_num;
        count++;
        cout << count << ".";
        if (user_num > 32767 || user_num < -32767) {
            cout << "数值超出范围" << endl;
            break;
        }
        if (user_num > num) {
            cout << "大了" << endl;
        } else if (user_num < num) {
            cout << "小了" << endl;
        } else {
            cout << "恭喜你，猜对了！" << endl;  
        }
    } while (user_num != num);
    cout << "你一共猜了" << count << "次。" << endl;
    cout << "================================================" << endl;

    return 0;
}