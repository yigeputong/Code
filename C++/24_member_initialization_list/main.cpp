//24_ 成员初始化列表
#include <iostream>
using namespace std;

class Entity {
private:
    int m_score;
    string m_name;
public:
    Entity()    //成员初始化列表
        : m_score(0), m_name("Unknown") //需要按顺序写，因为有的编译器会警告你
    {
        //m_name = "Unknown"; //如果再用等号初始化，就相当于 m_name = string("Unkown"); 这样会创建两个字符串，然后把其中一个直接扔掉，非常浪费性能
    }

    Entity(const string& name) 
        : m_name(name)  //用括号替换等号
    {}

    //这样做可以在代码非常多的时候也能让你很清楚的看到构造函数初始化了哪些成员变量
    //当然你也可以不这样做，但是你要小心别人的骂声，至少你要看得懂！
    //你应该永远使用成员初始化列表，除非运行程序的电脑是量子计算机 (bushi

    const string& GetName() const { return m_name; }
};

int main()
{
    Entity e0;
    cout << e0.GetName() << endl;
    
    Entity e1("yigeputong");
    cout << e1.GetName() << endl;

    cerr << "Press Enter to continue... ";
    cin.get();
    return 0;
}