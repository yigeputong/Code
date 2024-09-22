#include <iostream>
using namespace std;

void print(const char* message) {
	cout << message << endl;
}

int main() {
	int x = 5;
	bool x5 = x == 5;
	if (x5) {
		print("x = 5");
	}

	system("pause");
	return 0;
}