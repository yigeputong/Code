#include <iostream>
using namespace std;

int main() {
    int var = 8;
    int* ptr = &var;// *表示指针，&表示取地址
    cout << var << endl;//var = 8
    *ptr = 10;//*ptr = var; ptr = var 的内存地址
    cout << var << endl;//var = 10

    cout << "Press Enter to continue... ";
    cin.get();   
    return 0;
}