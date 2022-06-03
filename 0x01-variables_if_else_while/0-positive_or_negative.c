#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - if the random generated number is weather negative, positive or zero
 * Return: 0 if all goes well
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("is positive");
	else if (n < 0)
		printf("is negative");
	else
		printf("is zero");
	return (0);
}
