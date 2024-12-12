//05_1_函数的分文件编写
#include <iostream>
#include "05_3_swap.h"  //使用同一个文件夹下的头文件用双引号

using namespace std;

int main() {
    /**
     * 函数的分文件编写可以让代码结构更加清晰
     * 使用以下方法让函数分文件编写：
     * 1. 创建一个.h  的头文件
     * 2. 创建一个.cpp的源文件
     * 3. 在头文件中写函数的声明
     * 4. 在源文件中写函数的定义
     * 5. 在要调用这个函数的文件中引用头文件
     * 6. 使用函数
    **/

    int a = 10;
    int b = 20;
    swap(a, b); //使用函数
    cout << "a is " << a << ", b is " << b << endl;

    //cout << "Press Enter to exit... "; 
    //cin.get();
    return 0;
}