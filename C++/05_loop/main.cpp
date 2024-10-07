#include <iostream>
using namespace std;

int main() {
	
	for (int i = 0; i < 5; i++) {
		cout << "Hello world" << endl;
	}
	cout << endl;

	int j = 0;
	while (j < 5) {
		cout << "Hello world" << endl;
		j++;
	}
	cout << endl;

	int k = 0;
	do {
		cout << "Hello world" << endl;
		k++;
	} while (k < 6);

	cout << "Press Enter to continue... ";
    cin.get();
    return 0;
}