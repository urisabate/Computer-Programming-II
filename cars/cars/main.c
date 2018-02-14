#include<stdio.h>
#include<stdlib.h>
#include<time.h>

unsigned int distance = 1000;

struct drive {
	unsigned int max_vel, vel, in_pos, pos, num;	
};

//speed updater
void update_vel(struct drive drv[]) {

	for (int i = 0; i < 10; i++) {
		drv[i].vel += rand() % 20;

		if (drv[i].vel >= drv[i].max_vel) {
			drv[i].vel = rand() % 20 + 170;
		}
	}
}

//position updater
void update_pos(struct drive drv[]) {

	for (int i = 0; i < 10; i++) {
		drv[i].pos = drv[i].in_pos + (drv[i].vel/3.6);
		drv[i].in_pos = drv[i].pos;
	}
}

//scoreboard during the race
void print_velnpos(struct drive drv[]) {
	for (int i = 0; i < 10; i++) {
		printf("Nº:\t%d\tSpd:\t %d  km/h \t Pos:\t%d  m\n", drv[i].num, drv[i].vel, drv[i].pos);
	}
}

void delay(int number_of_seconds)
{
	// Converting time into milli_seconds
	int milli_seconds = 1000 * number_of_seconds;

	// Stroing start time
	clock_t start_time = clock();

	// looping till required time is not acheived
	while (clock() < start_time + milli_seconds);
}

int main() {

	srand(time(NULL));

	//declaring drivers

	struct drive p[10];

	for (int i = 0; i < 10; i++) {

		p[i].in_pos = 0;
		p[i].num = i + 1;
		p[i].pos = 0;
		p[i].vel = 0;
		p[i].max_vel = rand() % 20 + 180;

	}
	
	//let's start the race!! 
	unsigned short int finish = 0;
	while (finish != 1) {		

		update_pos(p);
		print_velnpos(p);
		update_vel(p);
		delay(1);
		system("cls");
	
		for (int i = 0; i < 10; i++) {
			
			if (p[i].pos <= distance) {
				finish = 0;
			}
			else {
				finish = 1;
				break;
			}				
		}
	}

	//order the positions(metodo de la burbuja(check the documentation))
	struct drive aux;
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			if (p[j].pos < p[i].pos) {

				aux.pos = p[j].pos;
				p[j].pos = p[i].pos;
				p[i].pos = aux.pos;

				aux.num = p[j].num;
				p[j].num = p[i].num;
				p[i].num = aux.num;
			}
		}
	}

	//print of final scoreboard
	printf("CLASIFICATION:\n");
	int i = 1, j = 0;
	while (i <= 10 && j < 10) {
		printf("%d:\t Nº: \t %d \t final pos:\t %d \n", i, p[j].num, p[j].pos);
		i++;
		j++;
	}
	
	system("pause");
	return 0;
}