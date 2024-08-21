#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "请输入数字来告知是星期几:";
    cin >> num;
    switch (num) {
    case 1:
        cout << "是星期一";
        break;
    case 2:
        cout << "是星期二";
        break;
    case 3:
        cout << "是星期三";
        break;
    case 4:
        cout << "是星期四";
        break;
    case 5:
        cout << "是星期五";
        break;
    case 6:
        cout << "是星期六";
        break;
    case 7:
        cout << "是星期日";
        break;
    default:
        cout << "输入错误，请输入1-7的整数";
    cout << "\n" << endl;
    }

    return 0;
}