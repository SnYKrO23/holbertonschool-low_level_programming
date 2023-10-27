#include "main.h"

/**
 *strlen : DESCRIPTION
 *The strlen() function calculates the length of the string pointed to by s,
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
	return(i);
}
