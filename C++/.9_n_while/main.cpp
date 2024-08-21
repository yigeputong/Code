#include <iostream>
using namespace std;

int main() {
    int day, weight = 0, count = 0;
    cout << "有点胖需要减肥10斤，计划5天，每天目标2斤体重，加油！" << endl;
    cout << endl;
    while (count < 5) {
        int fwc_count = 0, fhm_count = 0;
        count++;
        cout << "今天是减肥的第" << count << "天!" << endl;
        while (fwc_count < 3) {
            fwc_count++;
            cout << "开始做减肥第" << count << "天的第" << fwc_count << "个俯卧撑！ ";
        }
        cout << endl;
        weight += 1;
        cout << "减肥第" << count << "天的3个俯卧撑做完，体重减少1斤，目前累计减少体重" << weight << "斤！" << endl;
        while (fhm_count < 3) {
            fhm_count++;
            cout << "开始做减肥第" << count << "天的第" << fwc_count << "批次400冲刺跑！ ";
        }
        cout << endl;
        weight += 1;
        cout << "减肥第" << count << "天的3批次400米冲刺跑做完，体重减少1斤，目前累计减少体重" << weight << "斤！" << endl;
        cout << endl;
    }
    cout << count << "天减肥完成，体重累计减少" << weight << "斤！" << endl;

    return 0;
}