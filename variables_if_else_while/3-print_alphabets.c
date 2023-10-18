#include <stdio.h>

/**
 * main - Point d'entrée du programme.
 *
 * Description : Cette fonction est le point d'entrée principal du programme.
 * Elle affiche l'alphabet en minuscules, puis en majuscules,
 * suivies d'un saut de ligne.
 * Return: La valeur de retour est 0 pour indiquer une exécution réussie.
 **/

int main(void)
{
	char lowercase_letter = 'a';
	char uppercase_letter = 'A';

	for (int i = 0; i < 26; i++)
	{
		putchar(lowercase_letter);
		lowercase_letter++;
	}

	for (int i = 0; i < 26; i++)
	{
		putchar(uppercase_letter);
		uppercase_letter++;
	}

	putchar('\n');

	return (0);
}
