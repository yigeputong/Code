//冒泡排序算法
#include <iostream>
using namespace std;

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = { 6, 8, 0, 9, 1, 4, 2, 3, 5, 7 };
    //上面是一个数组，对他进行升序冒泡排序

    cout << "排序前：" << endl;
    print_array(arr, 10);

    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "排序完成后：" << endl;
    print_array(arr, 10);

    cout << "Press Enter to exit... ";
    cin.get();
    return 0;
}