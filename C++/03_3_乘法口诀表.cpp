//嵌套循环练习--乘法口诀表
#include <iostream>

using namespace std;

int main() {
    //使用嵌套循环输出乘法口诀表
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << "x" << i << "=" << i * j << "\t";
        }
        cout << endl;
    }

    // cout << "1x1=1" << endl;
    // cout << "1x2=2   2x2=4" << endl;
    // cout << "1x3=3   2x3=6   3x3=9" << endl;
    // cout << "1x4=4   2x4=8   3x4=12  4x4=16" << endl;
    // cout << "1x5=5   2x5=10  3x5=15  4x5=20  5x5=25" << endl;
    // cout << "1x6=6   2x6=12  3x6=18  4x6=24  5x6=30  6x6=36" << endl;
    // cout << "1x7=7   2x7=14  3x7=21  4x7=28  5x7=35  6x7=42  7x7=49" << endl;
    // cout << "1x8=8   2x8=16  3x8=24  4x8=32  5x8=40  6x8=48  7x8=56  8x8=64" << endl;
    // cout << "1x9=9   2x9=18  3x9=27  4x9=36  5x9=45  6x9=54  7x9=63  8x9=72  9x9=81" << endl;

    cout << "Press Enter to exit... ";
    cin.get();
    return 0;
}