//for语句练习--敲桌子
#include <iostream>

using namespace std;

int main() {
    //从1开始数到100，遇到有7的数字或7的倍数，打印敲桌子，否则打印数字
    for (int i = 1; i <= 100; i++) {
        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
            cout << "敲桌子" << endl;
        } else {
            cout << i << endl;
        }
    }

    cout << "Press Enter to exit... ";
    cin.get();
    return 0;
}