#include <iostream>
#include <string>
using namespace std;

class Printable //(2)现在每个继承自 Printable 的类都必须实现 GetClassName() ，否则不能实例化
{
public:
    virtual string GetClassName() = 0;  //(1)这是一个纯虚函数，现在不能实例化这个类
};

class A : public Printable
{
public:
    string GetClassName() override { return "A"; }
};

class B : public Printable
{
public:
    string GetClassName() override { return "B"; }
};

class C : public Printable
{
public:
    string SB () { return "SB"; }
};


void Print(Printable& obj)
{
    cout << obj.GetClassName() << endl;
}

int main()
{
    A a;    //(3) A 类继承自 Printable ，并有 GetClassName() 的实现，所以可以实例化
    B b;    //(4) B 类也可以
    //C c;  //(5) C 类继承自 Printable ，却没有 GetClassName() 的实现，所以不能实例化
    Print(a);
    Print(b);
    //Print(c); //(6)所以不能输出 C 的类名

    cout << "Press Enter to continue... ";
    cin.get();   
    return 0;
}