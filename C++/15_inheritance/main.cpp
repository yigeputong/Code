//15_继承
#include <iostream>
using namespace std;

class Entity
{
public:
    float X, Y;

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

class Player : public Entity    //继承父类 Entity ，不用再写重复代码
{
public:
    const char* Name;

    void PrintName()
    {
        cout << Name << endl;
    }
};

int main()
{
    system("chcp 65001");

    Player player;
    player.Name = "田所浩二";
    player.PrintName();
    player.Move(5.0f, 1.14f); //继承了父类的 Move 函数
    player.X = 3.14f; //继承了父类的 X 变量
    
    cout << "Press Enter to continue... ";
    cin.get();   
    return 0;
}