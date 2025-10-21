#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'Conditions'
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet = 'a';
	char alphabetUpper = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (alphabetUpper <= 'Z')
	{
		putchar(alphabetUpper);
		alphabetUpper++;
	}
	putchar('\n');
	return (0);
}
