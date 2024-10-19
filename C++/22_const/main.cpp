//22_const
#include <iostream>
using namespace std;

class Entity
{
private:
    int m_x, m_y;
    mutable int var;    //(14)mutable 表示即使是带有 const 的函数，仍然可以修改这个变量
public:
    int GetX() const    //(9)将 const 加在括号后面，表示承诺这个函数不会修改这个类
    {
        var = 5;    //(15)可以看出，这里修改了 var ，却没有报错
        return m_x;
    }

    void SetX(int x)    //(10)不能写 const ，因为这个函数修改了这个类
    {
        m_x = x;
    }

    const int* const GetY() const   //(11)wok! 一行写了三个 const ，爽!!!
    {
        return &m_y;    //(12)这表示返回了一个不能被修改的指针，指针指向的内容也不能修改，并且这个函数没有修改这个类
    }
};

void PrintEntity(const Entity& e)   //(13)这个函数的参数是 const Entity& ，表示这个函数不会修改这个类
{
    cout << e.GetX() << endl;
}

int main(){
    const int b = 10;   //(1)使用 const 修饰变量来承诺不会再修改
    //b = 10;   //(2)因为承诺不会修改，所以这里会报错

    const int MAX_AGE = 90; //(3)这里的 "最大年龄" 不会修改...?
    int* a = new int;
    *a = 2;
    cout << *a << endl;
    //a = (int*)&MAX_AGE    //(4)但是这里 a 指针指向了 MAX_AGE 常量，所以需要强制将 MAX_AGE 转换为 int* 类型
    //(5)你可以违背你的承诺，但是不推荐这样，因为有的编译器可能会报错(你猜我为什么用注释)
    cout << *a << endl;

    int const* c = new int; //(6)将 const 放在星号的左边，表示这个指针可以被修改，而它指向的值不可以修改
    int* const d = new int; //(7)将 const 放在星号的右边，表示这个指针不可以被修改，而它指向的值可以修改
    const int* const e = new int;   //(8)如果使用两个 const ，表示这个指针和它指向的值都不可以修改

    delete a;
    delete c;
    delete d;
    delete e;

    cerr << "Press Enter to exit... ";
    return 0;
}