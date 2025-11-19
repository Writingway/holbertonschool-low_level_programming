#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main
 * @argc: name of the person
 * @argv: name of the person
 * Return: main.
 */

int (*f)(int a, int b);

int main(int argc, char *argv[])
{
	int newNum, newNum2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	newNum = atoi(argv[1]);
	newNum2 = atoi(argv[3]);

	if (argv[2][0] == '/' || argv[2][0] == '%')
	{
		if (newNum == 0 || newNum2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}

	result = f(newNum, newNum2);

	printf("%d\n", result);
	return (0);
}
