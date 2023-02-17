#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last degit of a randomly generated number
 * 	and weather it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - Rand_Max / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d and is 0\n", n, n % 10);
	}
	return (0);
}
