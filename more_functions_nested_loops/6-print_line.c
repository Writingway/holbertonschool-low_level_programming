#include "main.h"

/**
 * print_line - check the code
 * @n : integer to check
 * Return: Always 0.
 */
void print_line(int n)
{
	/*
	*tant que n et superieur à 0
	*alors j'affiche le nombre de char avec '_'
	*sinon je retourne à la ligne
	*/

	int i = 0;

	while (n > i)
	{
		_putchar('_');
		i = i + 1;
	}
	_putchar('\n');
}
