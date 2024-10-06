#include <iostream>
#include "static.cpp"
using namespace std; 

//   int s_variable = 10;   <- 不行
extern int s_variable;

extern void fuction();

int main() {
    fuction();
    cout << s_variable << endl;

    cout << "Press Enter to continue... ";
    cin.get();   
    return 0;
}