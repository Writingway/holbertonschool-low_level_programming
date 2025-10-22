#include "main.h"
/**
 * print_alphabet - check the code
 * Return: Always 0.
 * print_alphabet(void) - entry point
 * Description: This function prints the alphabet, in lowercase
*/
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
