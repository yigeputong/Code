//13_构造函数
#include <iostream>
using namespace std;

class Entity
{
public:
    float X,Y;

    Entity()     //构造函数是每次实例化对象时运行的函数，函数名必须与类名相同
    {

    }

    Entity(float x,float y) //可以带参数和添加多个
    {
        X = x;
        Y = y;
    }

    void Print()
    {
        cout << X << ", " << Y << endl;
    }
};

int main()
{
    system("chcp 65001");

    Entity e(10.0f,5.0f);
    e.Print();

    cout << "Press Enter to continue... ";
    cin.get();   
    return 0;
}