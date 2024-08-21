#include <iostream>
using namespace std;

int main()
{
    cout << "===========================================" << endl;
    cout << "小明发工资了。" << endl;
    cout << "小明说：\"买台电脑吧。\"(电脑5000元，要留1500元)" << endl;
    cout << "小明的工资是：" << endl;
    int salary;
    cin >> salary;
    cout << "小明想了想";
    if ((salary-5000) >= 1500) {
        cout << "说：\"买！\"" << endl;
        cout << "小明还剩" << salary-5000 << "元。" << endl;
    }
    else {
        cout << "说：\"还是算了吧。没钱呐！\"" << endl;
    }
    cout << "===========================================" << endl;

    system ("pause");
    return 0;
}