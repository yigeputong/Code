#include <iostream>
#include <random>
using namespace std;

int get_random_num(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(min, max);
    int random_number = dist(gen);
    return random_number;
}

int main() {
    int money = 10000;
    for (int id = 1; id <= 20; id++) {
        count_salary = get_random_num(1, 10);
        cout << count_salary;
        if (salary = 0) {
            cout << "���ʷ����ˣ��¸�����ȡ�ɡ�" << endl;
            break;
        }
        if (count_salary < 5) {
            cout << "Ա��" << count << "����Ч��" << count_salary << "������5���������ʣ���һλ��" << endl;
            continue;
        } else {
            salary = salary - 1000;
            cout << "��Ա��" << count << "���Ź���1000Ԫ���˻���ʣ��" << salary << "Ԫ��" << endl;
        }
    }
    cout << "���ʷ����ˣ��¸�����ȡ�ɡ�" << endl;

    system ("pause");
    return 0;
}