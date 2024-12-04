#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of char,
 *and initializes it with a specific char
 * @size: the number of elements
 * @c: the character variable
 * Return: a char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *mal_loc;
	unsigned int count;

	/*allocating memory space using malloc*/
	mal_loc = (char *) malloc(size * sizeof(c));
	if (size == 0)
	{
		return (NULL);
	}
	if (mal_loc == NULL)
	{
		return (0);
	}
	count = 0;
	while (count < size)
	{
		mal_loc[count] = c;
		count++;
	}
	return (mal_loc);
}
