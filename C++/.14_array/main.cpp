#include <iostream>
#include <random>
using namespace std;

int get_random_num (int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(min, max);
    int random_number = dist(gen);
    return random_number;
}

int main() {
    int right = 0;
    int num = get_random_num(1, 10);
    cout << num << endl;
    int guess_num[10];
    for (int count = 0; count < 10; count++) {
        cout << ++count << ".请输入数字(1-10): ";
        count--;
        cin >> guess_num[count];
        if (num == guess_num[count]) {
            right++;
        }
    }
    cout << "你输对了" << right << "个数字" << endl;

    system ("pause");
    return 0;
}