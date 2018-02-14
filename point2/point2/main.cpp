#include <iostream>
#include <cstdlib>
using namespace std;

void sum(short val1, short val2, short* result) {
	*result = val1 + val2;	
}

void main() {
	short x, y, result;
	cout << "Introduce 2 numbers\n";
	cin >> x;
	cin >> y;

	short *p = &result;

	sum(x, y, p);

	cout << result << endl;

	system("pause");
}