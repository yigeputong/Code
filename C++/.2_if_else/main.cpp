#include <iostream>
using namespace std;

int main()
{
    cout << "欢迎来到动物园。" << endl;
    cout << "请输入你的身高(cm)：" << endl;
    int height;
    cin >> height;

    if (height > 120)
    {
        cout << "您的身高超出120cm，请付款10元。" << endl;
    }
    else
    {
        cout << "您的身高未超出120cm，可以免费游玩。" << endl;
    }
    cout << "祝您游玩愉快。" << endl;

    return 0;
}