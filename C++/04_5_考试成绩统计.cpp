//二维数组练习--考试成绩统计
#include <iostream>

using namespace std;

int main() {

    int scores[3][3] = {
        {100, 100, 100},
        {90,  50,  100},
        {60,  70,  80 }
    };

    /**
     * 题目：有三个同学，他们的成绩如下表，在屏幕上输出三名同学的总成绩
     * ----------------------------
     * |      | 语文 | 数学 | 英语 |
     * ----------------------------
     * | 张三 |  100 | 100  | 100 |
     * ----------------------------
     * | 李四 |  90  |  50  | 100 |
     * ----------------------------
     * | 王五 |  60  |  70  | 80  |
     * ----------------------------
    **/

    //使用嵌套循环来打印二维数组
    for (int i = 0; i < 3; i++) {   //外层循环控制哪个学生
        int score = 0;
        for (int j = 0; j < 3; j++) {   //内层循环控制分数
            score += scores[i][j];
        }
        cout << "第" << i + 1 << "个同学的总成绩为：" << score << endl;
    }

    cout << "Press Enter to exit...";
    cin.get();
    return 0;
}