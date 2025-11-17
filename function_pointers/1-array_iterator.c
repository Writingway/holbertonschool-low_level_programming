#include <stdio.h>

/**
 * array_iterator - prints a name as is
 * @array: name of the person
 * @size: name of the person
 * @action: name of the person
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	if (size == 0)
		return;

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
