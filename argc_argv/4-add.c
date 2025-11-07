#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: count of the args
 * @argv: array of the args
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, somme = 0;
	char *arg;

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (j = 0; arg[j] != '\0'; j++)
		{
			if (arg[j] == '+' && j == 0)
				continue;

			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		somme += atoi(arg);
	}
	printf("%d\n", somme);
	return (0);
}
