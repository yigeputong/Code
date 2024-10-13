//08_引用
#include <iostream>
using namespace std;

void increment(int value) {
    value++;//引用传入的变量，并递增
}
int main() {
    int a = 5;
    int& ref = a;//&是引用，ref是a的引用，实际并不存在这个变量，只是给a一个别名
    ref = 2;//就是让a变成2
    cout << a << endl;
    cout << ref << endl;

    cout << endl;

    int b = 5;
    increment(b);
    cout << b << endl;

    cout << "Press Enter to continue... ";
    cin.get();   
    return 0;
}