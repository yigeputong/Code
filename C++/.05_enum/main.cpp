#include <iostream>
using namespace std;

int main() {
    enum Color {
        RED = 1,
        YELLOW,
        BLUE
    };

    cout << "��ϲ��ʲô��ɫ��1��ɫ��2��ɫ��3��ɫ" << endl;
    int num;
    cin >> num;

    cout << "��ϲ��";
    switch (num) {
        case RED:
            cout << "��ɫ";
            break;
        case YELLOW:
            cout << "��ɫ";
            break;
        case BLUE:
            cout << "��ɫ";
            break;
        default:
            cout << "�����ɫ";
    }
    cout << "����" << endl;
    
    system ("pause");
    return 0;
}