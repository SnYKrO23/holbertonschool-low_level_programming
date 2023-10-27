#include "main.h"

/**
 * Calculates the length of a string.
 *
 * This function takes a pointer to a null-terminated string and calculates
 * its length by iterating through the characters.
 *
 * param str The input string.
 * return The length of the string.
 *
 * strlen : DESCRIPTION : _strlen(char *s)
 * The _strlen function calculates the length of the string pointed to by s,
 * excluding the terminating null byte ('\0').
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
