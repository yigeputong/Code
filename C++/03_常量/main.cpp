//03_常量
#include <iostream>

using namespace std;

//使用宏定义定义常量(不需要分号)
#define day 7

//你还可以替换关键字
#define retrun return

int main() {
    //常量用于记录程序中不能更改的数据
    /**
     * 定义常量的两种方式
     * 1.使用宏定义，让编译器在进行预处理时直接把常量名替换成指定的值，需要在文件的最开头写：
     *     #define 常量名 常量值
     * 2.使用 const 修饰变量，让变量的值不能修改，仍然占用一部分内存，不需要在文件的最开头写：
     *     const 数据类型 常量名 = 常量值;
     * 常量是不能修改的，比如一周有7天是一个常量，你就不能改变了
     * 如果你对别人说：“一周有8天！”人家肯定不信你，如果你强行修改，那就会报错
    **/

    cout << "一周有 " << day << " 天" << endl;  //使用宏定义定义的常量

    //使用 const 修饰变量
    const int week = 7;
    cout << "一周有 " << week << " 天" << endl;

    cout << "Press Enter to exit... ";
    cin.get();
    retrun 0;   //这里的 return 被我改成了 retrun ，因为它在预处理时会被替换成 return ，这样就不会报错了
}