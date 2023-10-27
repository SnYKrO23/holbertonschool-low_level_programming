#include "main.h"

/**
 * print_rev - imprime a l'envers ,
 * print each character in reverse
 *
 * @s: str The input string to be printed in reverse.
 */

void print_rev(char *s)
{
	int i = 0;
	int a;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (a = i; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

