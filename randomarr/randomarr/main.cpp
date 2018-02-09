#include <cstdio>
#include <cstdlib>
#include <ctime>

typedef short int si;


int main() {
	srand(time(NULL));

	si arr1[10], arr2[10];
	for (si i = 0; i < 10; ++i) {
		arr1[i] = rand() % 21 - 10;
		printf("%d\t", arr1[i]);
	}

	printf("\n");
	arr2[0] = arr1[0];
	for (si i = 1; i < 10; ++i) {
		arr2[i] = arr1[i] + arr2[i - 1];
	}
	
	for (si i = 0; i < 10; ++i) {
		printf("%d\t", arr2[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}