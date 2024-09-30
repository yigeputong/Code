#include <iostream>
using namespace std;

class Entity
{
private:
    float m_X, m_Y;

public:
    Entity(float x, float y)
    {
        m_X = x;
        m_Y = y;
        cout << "Created Entity!" << endl;
    }

    ~Entity()//析构函数，就是清除这个实例是时运行的函数
    {
        cout << "Destroyed Entity!" << endl;
    }

    void Print()
    {
        cout << m_X << ", " << m_Y << endl;
    }
};

void Function()
{
    Entity e(4.0f, 8.0f);
    e.Print();
}//在这里运行析构函数

int main()
{
    system("chcp 65001");

    Function();

    system("pause");
    return 0;
}