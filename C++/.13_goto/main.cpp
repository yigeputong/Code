#include <iostream>
using namespace std;

int main() {
    a:
    cout << "我是A" << endl;

    b:
    cout << "我是B" << endl;

    goto d;

    c:
    cout << "我是C" << endl;

    d:
    cout << "我是D" << endl;

    system ("pause");
    return 0;
}