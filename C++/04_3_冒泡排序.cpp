//������ϰ3--ð������
#include <iostream>

using namespace std;

int main() {

    //������һ����������飬��Ҫʹ��ð����������������
    int arr[9] = { 3, 1, 4, 2, 5, 9, 7, 6, 8 };

    cout << "ԭʼ����Ϊ��";
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //ʹ��ð������������������
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "����������Ϊ��";
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Press Enter to exit...";
    cin.get();
    return 0;
}