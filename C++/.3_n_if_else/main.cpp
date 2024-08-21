#include <iostream>
using namespace std;

int main() {
    int num = 7;
    cout << "请输入第一个猜想的数字：";
    int guess;
    cin >> guess;
    if (guess == num) {
        cout << "第一次就猜对了，你真棒！" << endl;
    }
    else {
        cout << "不对，请再猜一次: ";
        cin >> guess;
        if (guess == num) {
            cout << "第二次猜对了，你真棒！" << endl;
        }
        else {
            cout << "不对，再最后猜一次：";
            cin >> guess;
            if (guess == num) {
                cout << "第三次猜对了，你真棒！" << endl;
            }
            else {
                cout << "Sorry, 全部猜错啦。我想的是：" << num << endl;
            }
        }
    }

    return 0;
}