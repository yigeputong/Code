//04_if语句
#include <iostream>
using namespace std;

void print(const char* message) {
	cout << message << endl;
}

int main() {
	int x = 6;
	if (x == 5) {
		print("x = 5");
	} else if (x == 6) {
		print("x = 6");
	} else {
		cout << "x is " << x << endl;
	}
	//if可以这样写
		if (1 == 1) {
			print("1 = 1");
		}
	//只有一行可以这样写
		if (2 == 2) print("2 = 2");

		if (3 == 3)
			print("3 = 3");

    cout << "Press Enter to continue... ";
    cin.get();
    return 0;
}