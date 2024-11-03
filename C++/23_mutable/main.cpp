//23_mutable
#include <iostream>
#include <string>
using namespace std;

/**
 * 在英语中，有一个单词 immutable ，意为：(某事)无法改变
 * mutable 是它的反义词，是可以改变的
 * 加了 const 的函数是不能改变数据的，如果必须要改变，那么就加上 mutable
**/

class Entity {
private:
    string m_name;
    mutable int m_debugCount = 0;   //(2)但是为了调试，可能会计算一下函数的运行次数
public:
    const string& GetName() const { //(1)这是一个有 const 的函数，是不能改变类的
        m_debugCount++; //(3)但是这里又想改变数据，虽然可以把变量移到其他地方，但会显得很乱，那么就加上 mutable 
        return m_name;
    }
};

int main()
{
    const Entity e;
    cout << e.GetName() << endl;

    int x = 8;
    auto f = [=]() mutable { //(4)这是一个lambda式子，使用 & 引用所有值，使用 = 传递所有值
        //x++;  //(5)这里会报错，因为 x 默认是 const 的，所以不能改变，应该另外创建一个变量
        //int y = x;
        //y++;
        //(6)但我加上这个吊爆了的 mutable ，这样就能修改 x 了(虽然跟另外创建一个变量一样，不过看起来更简洁)
        x++;
        cout << x << endl;
    };

    f();
    //(7)现在 x 仍然是 8，因为试使用值(=)传递，而不是引用传递(&)
    
    cerr << "Press Enter to continue... ";
    cin.get();
    return 0;
}