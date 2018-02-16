#define _CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void printString(char *concstr) {
	cout << concstr << endl;
}

int sizeWord(char *word) {
	int i = 0;
	while (word[i] != '\0') {
		++i;
	}
	return i;
}

void concat(char* word1, char* word2, char* resword) {
	strcpy(resword, word1);
	strcat(resword, word2);
}

int main(){

	char *word1, *word2;
	
	cout << "Write one word" << endl;
	cin >> *word1;
	cout << "Write another word" << endl;
	cin >> *word2;

	int sizeword1 = sizeWord(word1);
	int sizeword2 = sizeWord(word2);

	char*conctword = (char*)malloc((sizeword1+sizeword2+1)*sizeof(char));

	concat(word1, word2, conctword);
	printString(conctword);

	system("pause");
	return 0;
}