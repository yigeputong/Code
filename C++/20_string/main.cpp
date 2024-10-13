/**
 * (1)语法:
 * 使用以下几种方法来创建字符串:
 * char* name1 = "yigeputong";  //这是一个指针，指向这个字符串的内存
 * char name2[] = "yigeputong"; //这是一个数组，包含字符串的所有字符，以'\0'结尾，可以对它修改
 * char name3[11] = { 'y','i','g','e','p','u','t','o','n','\0' }    //这也是一个数组，第二种方法本质上就是这个，需要以 '\0' 或 0 结尾、
 * 但是这是C++，你可以使用string类来创建字符串，它比char数组更方便:
 * #include <string>
 * string name4 = "yigeputong";
**/
#include <iostream>
#include <string>
using namespace std;

//(3)函数的参数是复制原始参数，所以在函数里修改的参数不会影响到原始参数
//但是复制参数是很慢的，所以加 const 和 & 来表示引用参数并保证不会修改
//如果想要修改函数，建议添加一个新参数并将返回值返回到这个新参数上
void PrintString(const string& string) 
{
    cout << string << endl;
}

int main()
{
    char my_name[] = "ygpt";
    cout << my_name << endl;
    my_name[0] = 'Y';
    cout << my_name << endl;

    //(2)以下方法需要使用 string 创建字符串:
    string name = "yigeputong";
    cout << name.size() << endl;    //得到字符串的长度(不包含结束符'\0')
    name.append("hello");   //在字符串末尾添加字符串
    cout << name.find("putong") << endl;    //查找字符串，返回第一个匹配的位置(这里返回4)，如果没有返回 -1
    bool contains = name.find("yige") != string::npos;  //判断是否包含字符串并存储在一个 bool 变量中 


    cout << "Press Enter to continue... ";
    cin.get();
    return 0;
}