#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of main
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* here comes my code */
	if (n > 0)
		printf("%d n is positive\n", n);
	else if (n < 0)
		printf("%d n is negative\n", n);
	printf("%d n is zero\n", n);
	return (0);
}
