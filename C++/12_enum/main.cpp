#include <iostream>
using namespace std;

int a = 0;
int b = 1; //太乱了
int c = 2;

enum Example : unsigned char //默认为int
{
    A,//第一个默认为0
    B,
    C
    //默认从第一个开始递增
};

int main()
{
    system("chcp 65001");

    Example value = B; //只能等于A,B,C其中一个

    if (value = B)
    {
        //Do something
    }

    system("pause");
    return 0;
}