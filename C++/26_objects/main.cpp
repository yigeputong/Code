//26_C++对象
#include <iostream>
using namespace std;

class Entity {
private:
    string m_name;
public:
    Entity() : m_name("Unknown") {}
    Entity(const string& name) : m_name(name) {}

    const string& GetName() const { return m_name; }
};

int main()
{
    //Entity* e;
    //{
    //    Entity entity("yigeputong");
    //    e = &entity;
    //    cout << entity.GetName() << endl;
    //} // entity 对象在这里被销毁，所以 "yigeputong" 也被销毁(不是我)，如果不想让他消失，可以分配一个堆内存
    //也可能这个类大小很大，你不得不分配堆内存
    //但堆内存也很慢，容易忘记释放内存

    Entity* e;
    {
        Entity* entity = new Entity("yigeputong");  //分配堆内存，类型变为 Entity* 使用 new 关键字
        e = entity; //由于 entity 已经是一个指针了，所以不需要引用
        cout << (*entity).GetName() << endl;    //逆向引用 entity 
    }
    cout << e << endl;

    delete e;   //释放堆内存

    cerr << "Press Enter to continue... ";
    cin.get();
    return 0;
}