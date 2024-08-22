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
    cout << "================================================" << endl;
    cout << "我们来玩数字炸弹吧！" << endl;
    for (int guess_i, count = 0, i = get_random_num(-32768,32768); guess_i != i;) {
        cout << "请输入数字(-32768~32768):";
        cin >> guess_i;
        count++;
        cout << count << ".";
        if (guess_i > 32768 || guess_i < -327678) {
            cout << "数值超出范围" << endl;
            break;
        }
        if (guess_i > i) {
            cout << "大了" << endl;
        } else if (guess_i < i) {
            cout << "小了" << endl;
        } else {
            cout << "恭喜你，猜对了！" << endl; 
            cout << "你一共猜了" << count << "次。" << endl;
        }
    }
    cout << "================================================" << endl;
    
    return 0;
}