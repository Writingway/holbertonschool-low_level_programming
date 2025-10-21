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
	char alph;

	alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
