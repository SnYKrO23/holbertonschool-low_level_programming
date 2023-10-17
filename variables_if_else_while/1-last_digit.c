#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints the last digit of a randomly generated number
* and whether it is greater than 5, less than 6, or 0.
*
* Return: Always 0.
*/
int main(void)
{
	int n;
	int t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	t = n % 10;

	if (t > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, t);
	}
	else if (n < 6 && n !=  0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, t);
		}
	else if (t == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, t);
	}
	return (0);
}
