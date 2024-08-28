#include <iostream>
using namespace std;

int main() {
    int *p = new int;
    *p = 10;

    cout << *p << endl;
    delete p;

    system ("pause");
    return 0;
}