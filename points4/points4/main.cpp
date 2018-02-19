#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
typedef short int si;

void absSwap(si *v1, si sizev1, si *v2, si sizev2) {
	for (si i = 0; i < sizev1; i++) {		
			v1[i] = abs(v2[i]);
	}
}

void main() {
	srand(time(NULL));


	si *arr1 = (si*)calloc(20, sizeof(arr1));
	si *arr2 = (si*)malloc(20 * sizeof(si));

	for (si i = 0; i < 20; i++) {
		arr2[i] = rand() % 20-10;
	}

	absSwap(arr1, 20, arr2, 20);

	cout << "Array 1:\t" << "Array 2:\n" << endl;
	for (si i = 0; i < 20 ; i++) {
		cout << arr1[i] << "\t\t" << arr2[i] << endl;
	}

	free(arr1);
	free(arr2);

	system("pause");
}