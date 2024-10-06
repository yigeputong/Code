#include <iostream>
#include "log.h"    //引用自己的头文件用双引号
using namespace std;

int main() {
    log("Hello world");

    cout << "Press Enter to continue... ";
    cin.get();   
    return 0;
}