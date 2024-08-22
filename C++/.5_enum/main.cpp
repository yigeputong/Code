#include <iostream>
using namespace std;

int main() {
    enum Color {
        RED = 1,
        YELLOW,
        BLUE
    };

    cout << "你喜欢什么颜色？1红色，2黄色，3蓝色" << endl;
    int num;
    cin >> num;

    cout << "你喜欢";
    switch (num) {
        case RED:
            cout << "红色";
            break;
        case YELLOW:
            cout << "黄色";
            break;
        case BLUE:
            cout << "蓝色";
            break;
        default:
            cout << "别的颜色";
    }
    cout << "啊！" << endl;
    
    system ("pause");
    return 0;
}