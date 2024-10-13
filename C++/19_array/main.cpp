//19_数组
#include <iostream>
using namespace std;

/**
 * (1)42:7
 * (2)82:8
 * (3)88:24
 * (4)91:8
 * (5)92:37
 * (6)98:28
 * (7)18:20
 * (8)19:8
**/

class Entity
{
public:
    int arr[5]; //(7)在类里创建一个数组
    //(8)如果使用 new 来申请内存，那么数组的内存地址会离这个类的内存很远，会影响性能

    Entity()
    {
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 5;
        }
    }
};

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
 /**
  * (1)语法：
  * 数据类型 数组名[数组大小] = { 元素1, 元素2, ..., 元素n };
  * 使用 数组名[索引] 来定位数组中的元素 (索引从0开始)
  * 
  * 如果使用 cout << 数组名 << endl; 会输出这个数组的内存地址
  * 如果想要输出数组中的元素，需要使用 for 循环
  * {
  *     for (int i = 0; i < 数组大小; i++)
  *     {
  *         cout << 数组名[i] << " ";
  *     }
  *     cout << endl;
  * }
  * 
  * 两种申请内存的方式：
  *     int example1[5] = { 1, 2, 3, 4, 5 };    申请5个int大小的栈内存并赋值，跳出作用域后会自动释放
  *     int* example2[] = new int[5];  申请5个int大小的堆内存，需要使用 delete[] example2; 释放，不然会发生内存泄漏
  * 
  * 如果是在栈上分配的数组，可以使用以下方法来获得数组中元素的数量:
  * {
  *     int(这里不能有"*") size = sizeof(数组名) / sizeof(数组类型);
  * }
  * 但一般这样写容易出问题，可以这样:
  * {
  *     const(在类中要加static) int arrSize = 5;
  *     int array[arrSize];
  * }
  * 这样就能知道数组中元素的数量了
  * 还可以使用 C++11 添加的标准数组来创建数组:
  * #include <array>
  * {
  *     array<数组类型, 数组长度> 数组名 = { 元素1, 元素2, ..., 元素n };
  *     //使用 数组名.size() 来获得数组中元素的数量
  * }
 **/
    int example[5] = { 1, 2, 3, 4, 5 };
    printArray(example, 5);
    example[2] = 6;
    printArray(example, 5);

    //(2)因为数组本质是一个指针，下标就是指针的偏移量，所以可以把一个数组赋值给一个指针来控制内存
    int* ptr = example; 
    cout << ptr << endl;
    auto ptr2 = ptr + 2;
    *ptr2 = 9;
    printArray(example, 5);
    *(ptr + 3) = 8; //(3)偏移3个int，就和 exmple[3] = 8; 一样
    printArray(example, 5);

    //(4)可以通过 new 给数组申请内存
    int* example2 = new int[5];  //(5)注意这里要加 * 和 [] ，后面写数组的大小
    for (int i = 0; i < 5; i++)
    {
        example2[i] = i;
        cout << example2[i] << " ";
    }
    cout << endl;
    delete[] example2;  //(6)记得释放内存，不然会内存泄漏

    cout << "Press Enter to continue... ";
    cin.get();
    return 0;
}