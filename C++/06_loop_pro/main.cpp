#include <iostream>
using namespace std;

int main() {
	cout << "continue" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i << endl;
		if (i == 3) 
			continue;
	}

	cout << "break" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i << endl;
		if (i == 3) {
			break;
		}
	}

	cout << "Press Enter to contiune... ";
	cin.get();
	return 0;
}