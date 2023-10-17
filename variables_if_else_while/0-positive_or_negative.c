#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Point d'entrée du programme
 *
 * Description : Cette fonction est le point d'entrée du programme et effectue les
 * tâches suivantes :
 * 1. Initialise le générateur de nombres aléatoires.
 * 2. Génère un nombre aléatoire entre -100 et 100.
 * 3. Détermine si le nombre est positif, négatif ou nul.
 * 4. Affiche le résultat sur la sortie standard.
 *
 * Renvoie : Renvoie toujours 0 pour indiquer une exécution réussie.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
        printf(" %d is positive.\n", n);
    } else if (n < 0) {
        printf(" %d is negative.\n", n);
    } else {
        printf(" %d is zero.\n");
    }

	return (0);
}
