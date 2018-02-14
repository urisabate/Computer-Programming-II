#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char buffer[2000];

//void delay(unsigned int mseconds)
//{
//	clock_t goal = mseconds + clock();
//	while (goal > clock());
//}

void drawearth(char str[], FILE* earth) {
	while (feof(earth) == 0) {

		system("cls");

		for (int i = 0; str[i] != '0'; ++i) {
			printf("%c", str[i]);

			//actualizarbuffer
			if (str[i] == '0') {
				fseek(earth, ftell(earth) + 1, ftell(earth));
				for (int j = 0; str[j] != '0'; ++j) {
					str[j] = fgetc(earth);
				}
			}
		}
	}
}

int main() {
	FILE* earthroll = fopen("earth.txt", "r");

	if (earthroll != NULL) {
		int j = 0;
		while (buffer[j] != '0') {
			//buffer[i] = fgetc(earthroll);
			fscanf_s(earthroll, "%c", buffer[j]);
			j++;
		}
		drawearth(buffer, earthroll);
		fclose(earthroll);
	}

	system("pause");
	return 0;
}