#include <iostream>
using namespace std;

struct Entity
{
    //static
    int x,y;

    void Print()
    {
        cout << x << ", " << y << endl;
    }
};

int main()
{
    system ("chcp 65001");

    Entity e;
    e.x = 2;
    e.y = 3;

    Entity e1 = {5, 8};//加了static就会报错

    e.Print();
    e1.Print();

    cout << "Press Enter to continue... ";
    cin.get();   
    return 0;
}