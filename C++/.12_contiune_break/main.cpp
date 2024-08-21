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
            cout << "工资发完了，下个月领取吧。" << endl;
            break;
        }
        if (count_salary < 5) {
            cout << "员工" << count << "，绩效分" << count_salary << "，低于5，不发工资，下一位。" << endl;
            continue;
        } else {
            salary = salary - 1000;
            cout << "向员工" << count << "发放工资1000元，账户余额还剩余" << salary << "元。" << endl;
        }
    }
    cout << "工资发完了，下个月领取吧。" << endl;

    system ("pause");
    return 0;
}