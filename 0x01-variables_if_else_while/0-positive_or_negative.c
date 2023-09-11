#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - Entry point */

/* Return: always 0 (success) */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* here comes my code */
	if (n > 0)
		printf("n %d is positive \n", n);
	else if (n == 0)
		printf("n %d is zero \n", n);
	printf("n %d is negative \n", n);
	return (0);
}
