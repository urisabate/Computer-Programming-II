#include <stdio.h>
#include <stdlib.h>

//programa para obtener la letra del nif usando el numero
int main() {

	unsigned int nif, letter;
//inputting the number
	printf("Introduce your NIF:\n");
	scanf_s("%ud\n", &nif);

//identifying the letter
	letter = nif % 23;

	
	if (letter == 0 || letter == 23)
		printf("Your complete NIF is: %u\t T\n", nif);
	else if (letter == 1)
		printf("Your complete NIF is: %u\t R\n", nif);
	else if (letter == 2)
		printf("Your complete NIF is: %u\t W\n", nif);
	else if (letter == 3)
		printf("Your complete NIF is: %u\t A\n", nif);
	else if (letter == 4)
		printf("Your complete NIF is: %u\t G\n", nif);
	else if (letter == 5)
		printf("Your complete NIF is: %u\t M\n", nif);
	else if (letter == 6)
		printf("Your complete NIF is: %u\t Y\n", nif);
	else if (letter == 7)
		printf("Your complete NIF is: %u\t F\n", nif);
	else if (letter == 8)
		printf("Your complete NIF is: %u\t P\n", nif);
	else if (letter == 9)
		printf("Your complete NIF is: %u\t D\n", nif);
	else if (letter == 10)
		printf("Your complete NIF is: %u\t X\n", nif);
	else if (letter == 11)
		printf("Your complete NIF is: %u\t B\n", nif);
	else if (letter == 12)
		printf("Your complete NIF is: %u\t N\n", nif);
	else if (letter == 13)
		printf("Your complete NIF is: %u\t J\n", nif);
	else if (letter == 14)
		printf("Your complete NIF is: %u\t Z\n", nif);
	else if (letter == 15)
		printf("Your complete NIF is: %u\t S\n", nif);
	else if (letter == 16)
		printf("Your complete NIF is: %u\t Q\n", nif);
	else if (letter == 17)
		printf("Your complete NIF is: %u\t V\n", nif);
	else if (letter == 18)
		printf("Your complete NIF is: %u\t H\n", nif);
	else if (letter == 19)
		printf("Your complete NIF is: %u\t L\n", nif);
	else if (letter == 20)
		printf("Your complete NIF is: %u\t C\n", nif);
	else if (letter == 21)
		printf("Your complete NIF is: %u\t K\n", nif);
	else if (letter == 22)
		printf("Your complete NIF is: %u\t E\n", nif);

	system("pause");
	return 0;
}