//01_数据类型
#include <iostream>

using namespace std;

int main() {
    /**
     * C++ 规定，在创建变量的时候需要加上数据类型，否则无法分配内存
     * 以下是常用的数据类型：
     *  数据类型                占用大小                                        取值范围
     *  short(短整型)           2字节                                          -32768 ~ 32767 (-2^15 ~ 2^15-1)
     *  int(整型)               4字节                                          -2147483648 ~ 2147483647 (-2^31 ~ 2^31-1)
     *  long(长整型)            Windows为4字节，Linux为4字节(32位)，8字节(64位)  -2^31 ~ 2^31-1 或 -2^63 ~ 2^63-1
     *  long long(长长整型)     8字节                                          -9223372036854775808 ~ 9223372036854775807 (-2^63 ~ 2^63-1)
     *  float(单精度浮点型)     4字节                                           6位有效数字 
     *  double(双精度浮点型)    8字节                                           15位有效数字
     *  char(字符型)            1字节                                           0 ~ 255
     *  bool(布尔型)            1字节                                           true(1) 或 false(0)
     * 使用 sizeof( 数据类型 或 变量 ) 可以查看数据类型或变量占用的内存大小，单位为字节
    **/

    cout << "short 类型占用的内存为：" << sizeof(short) << endl;
    cout << "int 类型占用的内存为：" << sizeof(int) << endl;
    cout << "long 类型占用的内存为：" << sizeof(long) << endl;
    cout << "long long 类型占用的内存为：" << sizeof(long long) << endl;
    cout << "float 类型占用的内存为：" << sizeof(float) << endl;
    cout << "double 类型占用的内存为：" << sizeof(double) << endl;
    cout << "char 类型占用的内存为：" << sizeof(char) << endl;
    cout << "bool 类型占用的内存为：" << sizeof(bool) << endl;
    int a = 10;
    cout << "a 变量占用的内存为：" << sizeof(a) << endl;

    char b = 'b';
    cout << b << endl;

    cout << "Press Enter to exit... ";
    cin.get();
    return 0;
}