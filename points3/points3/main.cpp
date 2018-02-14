#include <iostream>
using namespace std;

void reverse(short*arr, short sizearr) {
	for (short i = sizearr - 1; i >= 0; i--) {
		cout << *(arr + i) << endl;
	}
}

void main() {

	short arr[10];
	cout << "Introduce 10 numbers" << endl;
	for (short i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	system("cls");
	short *ptr = arr;
	reverse(ptr, 10);

	system("pause");
}