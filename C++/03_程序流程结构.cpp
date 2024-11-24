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
			// while 的语法：
			// while (条件) {
			//    条件为 true 时执行的代码
			// }
			// 条件如果为 true 就是死循环
			int num = 0;
			int count = 0;
			cout << "输入一个正整数：";
			cin >> count;
			while ( num < count ) {
				cout << num++ << endl;
			}
		}

		
		{//do while
			// do while 的语法：
			// do {
			// 	//条件为 true 时执行的代码(至少执行一次)
			// } while (条件);
			// do while 与 while 的区别在于 do while 会先执行一次循环体，再判断条件是否为 true
			// 尽管条件一开始就是 false , 那也会至少执行一次循环体
			int num = 0;
			int count = 0;
			cout << "输入一个正整数：";
			cin >> count;
			do {
				cout << num++ << endl;
			} while ( num < count );
		}

		{//for
			// for 的语法：
			// for (初始表达式; 条件; 末尾表达式) {
			//    条件为 true 时执行的代码
			// }
			// 初始表达式：在循环开始前执行一次
			// 条件：在每次循环开始前执行一次，判断是否为 true
			// 末尾表达式：在每次循环结束后执行一次
			// 初始表达式、条件、末尾表达式都可以省略，但是分号不能省略
			for (int i = 0; i < 10; i++) {
				cout << i << endl;
			}
			// 输出0-9
		}

		{//嵌套循环
			//嵌套循环就是在一个循环中再嵌套一个或多个循环，来解决一些问题，一般是用两个 for 循环来解决
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					cout << "*" << " " << endl;
				}
				cout << endl;
			}
		}
	}

	{//跳转语句
		{//break
			//break 的作用是跳出当前循环，执行循环后面的代码
			for (int i = 0; i < 10; i++) {
				if (i == 5) {
					break;
				}
				cout << i << endl;
			}
			// 输出0-4
		}

		{//continue
			//continue 的作用是跳过当前循环，执行下一次循环
			for (int i = 0; i < 10; i++) {
				if (i == 5) {
					continue;
				}
				cout << i << endl;
			}
			// 输出0-4, 6-9
		}

		{//goto
			//goto 的作用是跳转到指定的标签处，执行标签后面的代码
			//goto 语句的使用要谨慎，因为它会导致代码的可读性变差，而且容易出现错误
			//goto 语句的标签可以是任何合法的 C++ 标识符，标识符后面加上一个冒号，比如:
			// a:
			//goto 语句的标签可以在任何地方使用，但是标签后面的代码必须在标签前面
			goto a;
			cout << "Hello World!" << endl;
			a:
			cout << "Hello C++!" << endl;
			// 输出Hello C++!
		}
	}

    cout << "Press Enter to exit... ";
    cin.get();
	cout << endl;
    return 0;
}