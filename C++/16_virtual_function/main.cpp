#include <iostream>
#include <string>
using namespace std;

class Entity
{
public:
    virtual string GetName() { return "Entity"; }   //(4)加上 virtual 将函数改为虚函数
};

class Player : public Entity
{
private:
    string m_Name;
public:
    Player(const string& name)
        : m_Name(name) {}
    
    string GetName() override { return m_Name; }    //(5)应该添加 override(覆写函数) ，使其具有可读性
};

void PrintName(Entity* entity)
{
    cout << entity->GetName() << endl;
}

int main()
{
    Entity* e = new Entity();
    PrintName(e);   //(2)可以添加一个 PrintName 函数

    Player* p = new Player("yigeputong");
    PrintName(p);   //(6)输出 "yigeputong"

    //Entity* entity = p;
    //cout << entity->GetName() << endl;    //(1)应该输出 "yigeputong" ，但输出 "Entity"

    cout << "Press Enter to continue... ";
    cin.get();   
    return 0;
}