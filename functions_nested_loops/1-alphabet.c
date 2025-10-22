#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.

 * print_alphabet(void) - entry point
 *
 * Description: This function prints the alphabet, in lowercase
 *
 * Return: void
 
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
