//数组练习1--五只小猪称体重
#include <iostream>

using namespace std;

int main() {

    //以下是五只小猪的体重，需要找出最重的小猪并打印
    int pigs[5] = { 300, 350, 200, 400, 250 };

    //定义一个变量来存储最重的小猪的体重
    int max = 0;
    //使用 for 循环遍历数组
    for (int i = 0; i < 5; i++) {
        //如果当前小猪的体重大于 max，则更新 max 的值
        if (pigs[i] > max) {
            max = pigs[i];
        }
    }
    cout << "最重的小猪的体重为 " << max << endl;

    cout << "Press Enter to exit...";
    cin.get();
    return 0;
}