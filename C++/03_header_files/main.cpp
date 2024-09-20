#include <iostream>
using namespace std;

void log (const char* message) {
    cout << message << endl;
}
int main() {
    log("Hello world");

    system ("pause");
    return 0;
}