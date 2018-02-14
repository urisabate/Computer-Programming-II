#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef unsigned short us;

//delay function
void delay(int num_secs) {

	clock_t goal = num_secs + clock();
	while (goal > clock());
}

int main() {

	us hours, mins, secs;

//time initializer
	printf("Introduce hours, minutes and seconds to initialize your clock\n");

	scanf_s(" %hd\n ",&hours);
	scanf_s(" %hd\n ",&mins);
	scanf_s(" %hd\n ",&secs);

//time updater
	while (secs < 60 && mins < 60 && hours < 24) {

		secs++;
		
		if (secs == 60) {

			secs = 0;
			mins++;

			if (mins == 60) {

				mins = 0;
				hours++;

				if (hours == 24) {

					hours = 0;
				}
			}
		}
		delay(1000);
		system("cls");
		//digital clock
		printf("%hd\t:\t%hd\t:\t%hd\n",hours,mins,secs);
	}

	
	system("pause");
	return 0;
}