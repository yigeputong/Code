//25_三元操作符
#include <iostream>
#include <string>
using namespace std;

static int s_level = 1;
static int s_speed = 2;

int main() {
//  if (s_level > 5)
//      s_speed = 10;
//  else
//      s_speed = 5;
    //你可以使用三元操作符来简化上面的代码
    s_speed = (s_level > 5) ?        10       :         5       ;
//   变量名  =    (条件)     ? 条件为 true 的值 : 条件为 false 的值;
    cout << "speed = " << s_speed << endl;

    //还可以嵌套
    s_level = 0;
    cout << "Please enter your level: ";
    cin >> s_level;
    string rank = (s_level > 5 ? (s_level > 10 ? "S" : "A") : "B"); //嵌套使用三元操作符，建议加上括号以方便阅读
    cout << "Your level is " << s_level << endl;
    cout << "Your rank is  " << rank  << endl;

    //使用三元操作符可以简化代码、速度更快，但用太多会导致代码难以阅读

    cerr << "Press Enter to continue... ";
    cin.get();
    return 0;
}