#include <iostream>
using namespace std;

int main() {
    int line = 1;
    while (line <= 9) {
        int num = 1;
        while (num <= line) {
            cout << num << "*" << line << "=" << num * line << "\t";
            num++;
        }
        cout << "\n" << endl;
        line++;
    }
}