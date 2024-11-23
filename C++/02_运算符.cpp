//02_运算符
#include <iostream>

using namespace std;

int main() {
    /**
     * C++ 中有许多运算符，可以分为以下几类：
     * 算术运算符用于处理各种数学运算
     * 赋值运算符用于给一个变量赋值
     * 比较运算符用于比较两个值的大小，返回一个 bool 类型的值
     * 逻辑运算符用于组合多个条件，返回一个 bool 类型的值
    **/

    /**
     * 以下是算术运算符：
     * 符号 名称    示例    结果
     * +    加法    1+1     2 
     * -    减法    1-1     0
     * *    乘法    1*1     1
     * /    除法    1/1     1
     * %    取余    3%2     1
     * ++   自增    1++     2
     * --   自减    1--     0
     * 自增和自减分为前置(++n)和后置(n++)
     * 前者为先自增再使用，后者为先使用再自增
    **/

    int a = 1;
    int b = 2;
    int c = a + b;  //c为3
    cout << c << endl;
    int d = ++a;  //e为3，a为3
    int e = a++;  //d为1，a为2

    /**
     * 以下是赋值运算符：
     * 符号 名称    示例    结果
     * =    赋值    a=1     a为1
     * +=   加等于  a+=1    a为2
     * -=   减等于  a-=1    a为0
     * *=   乘等于  a*=1    a为1
    **/

    int f = 1;
    f += 1;  //f为2
    f -= 1;  //f为1
    f *= 2;  //f为2

    /**
     * 以下是比较运算符：
     * 符号 名称        示例        结果
     * ==   等于        1 == 1      true
     * !=  不等于       1 != 1      false
     * >    大于        1 > 1       false
     * <    小于        1 < 1       false
     * >=   大于等于    1 >= 1      true
     * <=   小于等于    1 <= 1      true
    **/

    bool g = 1 == 1;  //g为true

    /**
     * 以下是逻辑运算符：
     * 符号 名称        示例        结果
     * &&   与          1 && 1      true
     * ||   或          1 || 1      true
     * !    非          !(1 == 1)   false
    **/

    bool h = true && false; //h为false
    bool i = true || false; //i为true
    bool j = !true;         //j为false

    cout << "Press Enter to exit... ";
    cin.get();
    return 0;
}