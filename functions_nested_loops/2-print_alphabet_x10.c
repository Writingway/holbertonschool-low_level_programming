#include "main.h"
/**
 * print_alphabet_x10 - check the code
 * Return: Always 0.
 * Description: This function prints the alphabet, in lowercase 10 time
*/
void print_alphabet_x10(void)
{
	char alphabet;
	int round = 10;

	for (round = 1; round <= 10; round++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
