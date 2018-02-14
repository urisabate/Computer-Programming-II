#include <iostream>
#include <cstdlib>
#include <ctime>
#include <valarray>

using namespace std;
typedef short int si;

void absSwap(si *v1, si sizev1, si *v2, si sizev2) {
	valarray<si> vec2(v2, sizev2);
	valarray<si> vec1 = abs(vec2);

	for (si i = 0; i < sizev1; i++) {
		v1[i] = vec1[i];
		v2[i] = vec2[i];
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