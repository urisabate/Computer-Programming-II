#include <cstdio>
#include <cstdlib>
#include <ctime>

typedef unsigned short us;

int main() {
	srand(time(NULL));
	us num = rand() % 10 + 1;

	for (int i = 0; i <= num; ++i) {
		for (int j = num; j > i; --j) {
			printf(" ");
		}
		for (int k = 0; k <= i; ++k) {
			printf("^ ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}