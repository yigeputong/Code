#include <iostream>
using namespace std;

//返回值类型(void是没有返回值)+函数名+(参数类型+参数名,参数类型+参数名...)
void mulpitly_and_log(int a,int b) {
    cout << a * b << endl;
}
int main() {
    mulpitly_and_log(3,2);
    mulpitly_and_log(4,10);
    mulpitly_and_log(67,23);
    mulpitly_and_log(58,2);
    mulpitly_and_log(3,90);

    system ("pause");
    return 0;
}