//04_数组
#include <iostream>

using namespace std;

int main() {

    /**
     * 数组就是包含多个变量的集合
     * 以下是数组的特点:
     * 1. 数组的元素可以是任意相同数据类型
     * 2. 数组创建后大小不可改变
     * 3. 数组元素的地址是连续的
    **/

    /**
     * 数组的定义方法:
     * 1. 数据类型 数组名[数组长度];
     * 2. 数据类型 数组名[数组长度] = {值1, 值2,...};
     * 3. 数据类型 数组名[] = {值1, 值2,...};
     * 在初始化数组时，没有被赋值的元素会用 0 代替
    **/
    int arr[5];
    int arr[5] = {1, 2, 3, 4, 5};
    int array[] = {1, 2, 3};

    /**
     * 数组的元素访问:
     * 1. 数组名[索引];
     * 2. 数组名[索引] = 值;
    **/
    cout << arr[0] << endl;
    arr[0] = 10;
    cout << arr[0] << endl;
    //使用 for 循环遍历数组
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    /** 
     * 数组名的用途:
     * 1. 统计数组的长度
     * 2. 获取数组在内存中的首地址
    **/

    //统计数组的长度
    cout << "arr 数组占 " << sizeof(arr) << " 字节" << endl;
    cout << "arr 数组的长度为 " << sizeof(arr) / sizeof(arr[0]) << endl;
    //获取数组在内存中的首地址
    cout << "arr 数组的首地址为 " << arr << endl;

    cout << "Press Enter to exit... ";
    cin.get();
    return 0;
}