#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: pointer to a string
 * @src: pointer to source string
 * @n: Number of byte
 * Return: a pointer to dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
