#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function is the entry point of the program and performs
 * the following tasks:
 * 1. Initializes the random number generator.
 * 2. Generates a random number between -100 and 100.
 * 3. Determines whether the number is positive, negative, or zero.
 * 4. Prints the result to the standard output.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
