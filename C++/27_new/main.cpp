//27_new 关键字
#include <iostream>
using namespace std;

class New {
private:
    int a;
public:
    New() {
        cout << "Created a New class." << endl; 
    }
};

int main()
{
    //new 关键字用于分配堆内存
    //new 会现在内存中找到一段连续的空闲内存，然后返回一个指针，指向这段内存
    //然后你就可以使用这个指针来操作这段内存了
    //使用完后，记得使用 delete 关键字来释放内存
    int* p = new int;   //申请 1 个 int(4 字节) 大小的内存(如果没有方括号，默认是 1 个 int)
    *p = 114514;        //给这个内存赋值
    cout << *p << endl; //输出这个内存存储的值
    delete p;           //释放内存

    //new 还可以执行构造函数
    New* p2 = new New();    //创建一个 New 类的对象，并运行构造函数
    delete p2;              //释放内存

    //在 C 中，有一个函数叫 malloc()，也可以分配内存
    //malloc(10);   //分配 10 字节的内存
    //所以上面的代码也可以这样写：
    New* p3 = (New*)malloc(sizeof(New));
    free(p3);       //使用 C 函数 free() 来释放 malloc() 分配的内存
    //因为 malloc() 是 C 函数，C 没有类，所以不能运行构造函数

    //为数组分配内存应加上 []
    int* p4 = new int[10];
    delete[] p4;    //释放数组内存也应加上 []


    cout << "Press Enter to exit... ";
    cin.get();
    return 0;
}