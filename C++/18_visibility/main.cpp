#include <iostream>
using namespace std;

/**
 * (0)15:5
 * (1)24:20
 * (2)35:20
 * (3)55:20
 * (4)46:24
 * (5)26:24
 * (6)47:20
**/

/**
 * (0)代码都有自己的可见性，可见性修饰符有 public, private,和protected
 * 如果不添加修饰符，在结构体中默认为 public ，类中默认为 private
 * public: 任何地方都能访问
 * private: 只能在自己的类中访问
 * protected: 只能在自己的类中访问，继承自它的子类也可以访问
**/

class Entity
{
    int X, Y;   //(1)默认为 private 

    void Print()    //(5)函数同理
    {
        cout << X << " " << Y << endl;
    }
protected:
    int x, y;
public:
    Entity()
    {
        X = 0;  //(2)在自己的类中可以访问私有成员
        Y = 0;
        Print();
    }
};

class Player : public Entity
{
public:
    Player()
    {
        //X = 5;    //(4)只有在自己的类和类的友元中才能访问
        x = 5;  //(6)他的子类也能访问
    }
};


int main()
{
    Entity e;
    //e.X = 5;  //(3)在别的地方不能访问私有成员

    cout << "Press any key to continue... ";
    cin.get();
    return 0;
}