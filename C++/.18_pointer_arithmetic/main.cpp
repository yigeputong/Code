#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *p = &num;

    cout << p << endl;
    p++;
    cout << p << endl;

    system ("pause");
    return 0;
}