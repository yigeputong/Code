//03_程序流程结构
#include <iostream>

using namespace std;

int main() {

	system("chcp 65001");

    /**
	 * C++ 支持基本的三种程序流程结构
	 * 顺序结构：程序按顺序执行，不发生跳转
	 * 选择结构：依据条件是否满足，有选择的执行相应功能
	 * 循环结构：依据条件是否满足，循环多次执行某段代码
	**/

	{//选择结构
		{//if
			{//单行 if
				//单行 if 的语法：
				//if (条件) {
				//    条件为 true 时执行的代码
				//}
				int score;
				cout << "请输入分数：";
				cin >> score;
				cout << "你输入的分数为：" << score << endl;
				if (score >= 60) {
					cout << "你及格了" << endl;
				}
			}

			{//多行 if
				//多行 if 的语法：
				//if (条件) {
				//    条件为 true 时执行的代码
				//} else {
				//    条件为 false 时执行的代码
				//}
				int score;
				cout << "请输入分数：";
				cin >> score;
				cout << "你输入的分数为：" << score << endl;
				if (score >= 60) {
					cout << "你及格了" << endl;
				} else {
					cout << "byd你60分都没有, 还不去学习?!!" << endl;
				}
			}

			{//多条件 if
				//多行 if 的语法：
				//if (条件) {
				//    条件为 true 时执行的代码
				//} else if (条件) {
				//    条件为 true 时执行的代码
				//}	else if (条件) {
				//    条件为 true 时执行的代码
				//} else if (条件) {
				//...
				//} else {
				//    所有条件都为 false 时执行的代码
				//}
				int score;
				a:
				cout << "请输入分数：";
				cin >> score;
				cout << "你输入的分数为：" << score << endl;
				if (score >= 100) {
					cout << "考了这么多分, 真棒!" << endl;
				} else if (score >= 60) {
					cout << "没事, 及格了, 别灰心" << endl;
				} else if (score >= 0) {
					cout << "byd你60分都没有, 还不去学习?!" << endl;
				} else if (score == 0){
					cout << "考0分?! 今天你和我只能活一个!!!!(拿起晾衣架)" << endl;
				} else {
					cout << "你输入的分数有误, 请重新输入" << endl;
					goto a;
				}
			}

			{//if 的嵌套
				int score;
				cout << "请输入分数：";
				cin >> score;
				cout << "你输入的分数为：" << score << endl;
				if (score >= 0) {
					if (score >= 60) {
						if (score >= 100) {
							cout << "考了这么多分, 真棒!" << endl;
						} else {
							cout << "没事, 及格了, 别灰心" << endl;
						}
					} else {
						cout << "byd你60分都没有, 还不去学习?!" << endl;
					}
				} else {
					cout << "你输入的分数有误, 请重新输入" << endl;
				}
			}
		}

		{//三目运算符
			//三目运算符的语法：
			//表达式1 ? 表达式2 : 表达式3
			//如果表达式1为 true，则返回表达式2的值
			//如果表达式1为 false，则返回表达式3的值
			int a;
			int b;
			cout << "请输入 a 的值：";
			cin >> a;
			cout << "请输入 b 的值：";
			cin >> b;
			int c = a > b ? a : b;
			cout << "a 和 b 中较大的值为：" << c << endl;
		}

		{//switch
			//switch 的语法：
			//switch (表达式) {
			//    case 结果1:
			//        表达式等于结果1时执行的代码
			//        break;
			//    case 结果2:
			//        表达式等于结果2时执行的代码
			//        break;
			//   ...
			//    default:
			//        表达式不等于任何结果时执行的代码
			//}
			int score;
			cout << "请对你上一次看过的电影打分(0~5)：";
			cin >> score;
			switch (score) {
				case 5:
					cout << "这部电影很经典!" << endl;
					break;
				case 4:
					cout << "这部电影很不错!" << endl;
					break;
				case 3:
					cout << "这部电影一般般!" << endl;
					break;
				case 2:
					cout << "这部电影不好看!" << endl;
					break;
				case 1:
					cout << "这部电影太烂了!" << endl;
					break;
				case 0:
					cout << "这部电影是一坨!" << endl;
					break;
				default:
					cout << "你输入的分数有误!" << endl;
			}
		}
	}
	
	{//循环结构
		{//while
			//while 的语法：
			//while (条件) {
			//    条件为 true 时执行的代码
			//}
			//条件如果为 true 就是死循环
			int num = 0;
			while ( num < 10 ) {
				cout << num++ << endl;
			}
		}
	}

    cout << "Press Enter to exit... ";
    cin.get();
	cout << endl;
    return 0;
}