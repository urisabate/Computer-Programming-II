                                                                                                              #include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void main() {
	srand(time(NULL));

	short arr1[10];
	
	for (int i = 0; i < 10; i++) {
		arr1[i] = rand() % 50;
		short *p = arr1;		
		cout << p[i]<<"\t";
		cout << p << endl;
	}
	
	system("pause");
}