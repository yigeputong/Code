//21_字符串字面量
#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
	"yigeputong";   //(1)将鼠标悬停在字符串上，显示 (const char [11(包括终止符)])"yigeputong"
    const char name[12] = "yige\0putong";  //(2)变成了 (const char [12])"yige\000putong"
    cout << strlen(name) << endl;   //(3)输出"4"，因为 strlen() 函数只计算到第一个终止符

    const char* name1 = "yigeputong";
    const wchar_t* name2 = L"yigeputong";    //(4)这是宽字符，要在字符串前面加上 "L"
    const char* name3 = u8"yigeputong";      //(7)这是 8 位字符，要在字符串前面加上 "u8"
    const char16_t* name4 = u"yigeputong";   //(5)这是 16 位字符，要在字符串前面加上 "u"
    const char32_t* name5 = U"yigeputong";   //(6)这是 32 位字符，要在字符串前面加上 "U"

    cout << "Press Enter to continue... ";
    cin.get();
    return 0;
}