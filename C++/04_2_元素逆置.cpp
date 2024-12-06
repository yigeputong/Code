//数组练习2--元素逆置
#include <iostream>

using namespace std;

int main() {

    //以下是一个数组，要将他的元素逆置并输出
    int arr[5] = { 1, 3, 2, 5, 4 };

    int array[5];   //定义一个新的数组，用来存储逆置后的数组
    for (int i = 5; i > 0; i--) {
        array[5 - i] = arr[i - 1];  //将 arr 数组的元素逆置并存储到 array 数组中
    }

    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";    //输出逆置后的数组
    }
    cout << endl;

    cout << "Press Enter to exit...";
    cin.get();
    return 0;
}