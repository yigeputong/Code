//02_变量
#include <iostream>

using namespace std;

int main() {
    /**
     * 变量就是给一块内存起个名字，方便操作这块内存
     * 语法：
     * 数据类型 变量名 = 初始值;
    **/

    int variable = 10;          //定义了一个变量，变量名为 variable ，变量类型为 int ，变量初始值为 10
    cout << variable << endl;   //输出变量的值
    variable = 20;              //修改变量的值，不需要写上变量类型，因为变量已经定义过了
    cout << variable << endl;   //再次输出变量的值

    cout << "Press Enter to continue... ";
    cin.get();   
    return 0;
}