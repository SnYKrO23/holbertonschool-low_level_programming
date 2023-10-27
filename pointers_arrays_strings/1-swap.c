#include "main.h"
#include <stdio.h>

/**
 * swap_int - to swaps values of two integers
 * 'a' and 'b' swapping values
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
