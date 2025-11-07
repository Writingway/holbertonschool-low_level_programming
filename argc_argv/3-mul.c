#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: count of the args
 * @argv: array of the args
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}
