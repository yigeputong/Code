#include <iostream>
using namespace std;
//#()*
int main() {
	int * i;
	int num = 10;
	i = &num;
	cout << i << endl << *i << endl;

	int number = 20;
	int * j = &number;
	cout << j << endl << *j << endl;

	system ("pause");
	return 0;
}