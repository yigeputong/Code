#include <iostream>
using namespace std;
int main() {
    /**
     * (1byte) char = (-128 - +127) 
     * (2byte)short = (-32767 - +32767)
     * (4byte)int = (-2147483647 - +2147483647)
     * (8byte)long = (-9223372036854775807 - +9223372036854775807)
     * (8byte)long long = (-9223372036854775808 - +9223372036854775807)
     * (4byte)float = (-127 - +127 + 6~7位有效数字)f
     * (8byte)double = (-1023 - +1023 + 15~16位有效数字)
     * (1byte)bool = ture(1或以上) 或 false(0)
     * unsigned char =  (0 - +256)
     * unsigned short = (0 - +65536)
     * unsigned int = (0 - +4294967296)
     * unsigned long = (0 - +18446744073709551616)
     * unsigned long long = (0 - +18446744073709551616)
     * char类型不会正常输出数字，而是输出ASCII码对应的字符
     */

    short variable = 8;
    wcout << variable << endl;
    variable = 20;
    wcout << variable << endl;

    system ("pause");
    return 0;
}