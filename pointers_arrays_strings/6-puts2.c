#include "main.h"

/**
* puts2 - function should print only one character out of two
* starting with the first one
* @str: input
* Return: print
*/

void puts2(char *str)
{
int a = 0;
int b = 0;
char *i = str;
int c;
while (*i != '\0')
{
i++;
a++;
}
b = a - 1;
for (c = 0 ; c <= b ; c++)
{
if (c % 2 == 0)
{
_putchar(str[c]);
}
}
_putchar('\n');
}
