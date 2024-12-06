//数组练习3--冒泡排序
#include <iostream>

using namespace std;

int main() {

    //以下是一个无序的数组，需要使用冒泡排序将其升序排序
    int arr[9] = { 3, 1, 4, 2, 5, 9, 7, 6, 8 };

    cout << "原始数组为：";
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //使用冒泡排序将数组升序排序
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "排序后的数组为：";
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Press Enter to exit...";
    cin.get();
    return 0;
}