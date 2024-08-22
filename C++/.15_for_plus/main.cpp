#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    cout << "while" << endl;
    int i = 0;
    while (i < sizeof(arr) / sizeof(arr[0])) {
        cout << arr[i] << endl;
        i++;
    }

    cout << "for" << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << arr[i] << endl;
    }

    cout << "for plus" << endl;
    for (int i : arr) {
        cout << i << endl;
    }

    system ("pause");
    return 0;
}