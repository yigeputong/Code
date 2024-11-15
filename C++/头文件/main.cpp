//03_头文件
//如果你的项目体积很大，那么你可能需要把代码拆分成多个文件
/**
 * 步骤(始终在同一个文件夹下进行)：
 * 创建一个后缀名为.h的头文件
 * 创建一个后缀名为.cpp的源文件
 * 在头文件中写函数的声明
 * 在源文件中写函数的定义

**/
#include <iostream>
#include "swap.h"    //引用自己的头文件用双引号
using namespace std;

int main() {
    int a = 100;
    int b = 200;
    swap(&a, &b); //调用函数
    
    cout << "Press Enter to continue... ";
    cin.get();   
    return 0;
}