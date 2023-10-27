#include "main.h"
#include <stdio.h>

/**
 * swap_int - to swaps values of two integers
 * 'a' and 'b' swapping values
 *1-swap.c:9: warning: No description found for parameter or member 'a'
 *1-swap.c:9: warning: No description found for parameter or member 'b'
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
