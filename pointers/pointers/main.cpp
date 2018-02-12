#include <iostream>
#include <cstdlib>
#include <string>
using namespace std; //namespaces are parts of the libraries which allow us to use all 
					 //the commands that are inside without needing to open the whole library

void main() {

	string a;
	cin >> a;//console input
	getline (cin,a); //input for a whole line with spaces in it
	cout << a << endl; //console output

	/*------------------POINTERS-------------------*/

	int energy = 100;
	int *ptr = &energy;
	*ptr = 50;
	cout << "ENERGY=" << energy << "__" << &ptr << endl;

	/*-------------EXERCICES-------------*/

	int vec[3] = { 1,2,3 };
	//cout << &vec << endl;
	//cout << vec[0] << endl;

	int *p = vec;
	cout << p[0] << endl;
	cout << p[1] << endl;
	cout << p[2] << endl;

	cout << *(p + 0) << endl;
	cout << *(p + 1) << endl;
	cout << *(p + 2) << endl;

	cout << *p << endl;
	cout << ++*p << endl;
	cout << ++*p << endl;

	system("pause");
}
