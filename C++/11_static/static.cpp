#include <iostream>
using namespace std;

int s_variable = 5;   //加了 static 就不能从别的地方访问这个变量了

void fuction() {  // 同理
    cout << "hello world" << endl;
}
