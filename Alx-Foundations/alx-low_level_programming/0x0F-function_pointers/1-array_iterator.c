#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - funtion that prints elements of an array
 * @array: an array
 * @size: array size
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != NULL)
	{
		if (action != NULL)
		{
			for (a = 0; a < size; a++)
			{
				action(array[a]);
			}
		}
	}
}
