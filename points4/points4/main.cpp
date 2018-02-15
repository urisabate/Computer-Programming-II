#include <iostream>
#include <cstdlib>
#include <ctime>
#include <valarray>

using namespace std;
typedef short int si;

void absSwap(si *v1, si sizev1, si *v2, si sizev2) {
	
	for (si i = 0; i < sizev1; i++) {
		if (v2[i] < 0) {
			v1[i] = abs(v2[i]);
		}
		else { v1[i] = v2[i]; }
	}
}

void main() {
	srand(time(NULL));

	si *arr1 = (si*)calloc(20, sizeof(arr1));
	si *arr2 = (si*)malloc(sizeof(arr2));

	for (si i = 0; i < 20; i++) {
		arr2[i] = rand() % 20 - 40;
	}

	absSwap(arr1, 20, arr2, 20);

	cout << "Array 1:\t" << "Array 2:\n" << endl;
	for (si i = 0; i < 20; i++) {
		cout << arr1[i] << "\t\t" << arr2[i] << endl;
	}

	system("pause");
}