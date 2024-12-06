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
    int min, max;
    cout << "===================================================================" << endl;
    cout << "我们来玩猜数字吧！" << endl;
    cout << "请自行确定范围，最小值不能小于-2147483647，最大值不能大于2147483647" << endl;
    cout << "请输入最小值: ";
    cin >> min;
    if (min < -2147483647) {
        cout << "请输入正确的数值" << endl;
        cin >> min;
    }
    cout << "请输入最大值: ";
    cin >> max;
    if (max > 2147483647) {
        cout << "请输入正确的数值" << endl;
        cin >> max;
    }
    cout << "开始猜数字啦!" << endl;
    ong ong guess_num, count = 0, num = get_random_num(min,max);
    while (guess_num != num) {
        cout << "请输入数字(" << min << "~" << max << "):";
        cin >> guess_num;
        count++;
        cout << count << ".";
        if (guess_num > max || guess_num < min) {
            cout << "请输入正确的数值" << endl;
            break;
        }
        if (guess_num > num) {
            cout << "大了" << endl;
            max = guess_num;
        } else if (guess_num < num) {
            cout << "小了" << endl;
            min = guess_num;
        } else {
            cout << "恭喜你，猜对了！" << endl; 
            cout << "你一共猜了" << count << "次。" << endl;
            break;
        }
    }
    cout << "===================================================================" << endl;
    
    return 0;
}