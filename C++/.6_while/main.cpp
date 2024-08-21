#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int n = 1, count = 0;
    while (count < 100) {
        num += n;
        n++;
        count++;
    }
    cout << num << endl;

    return 0;
}