#include "main.h"
/**
 * _islower - check if is lower
 * @c: The character to check
 * Return: Always 0.
 * Description: This function prints the alphabet, in lowercase 10 time
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
