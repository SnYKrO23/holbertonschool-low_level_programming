#include <stdio.h>

/**
 * main - Point d'entrée du programme.
 *
 * Description: Cette fonction est le point d'entrée principal du programme.
 * Elle imprime l'alphabet en minuscules à l'exception des lettres 'q' et 'e'
 * et renvoie 0 pour indiquer une exécution réussie.
 * Return: 0 pour une exécution réussie.
 */

int main(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}
