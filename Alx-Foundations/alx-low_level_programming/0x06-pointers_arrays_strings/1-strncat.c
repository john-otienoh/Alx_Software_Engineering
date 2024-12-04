#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Number of bytes
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;
	int i = 0;

	while (*dest_ptr != '\0')
		dest_ptr++;
	while (i < n && *src != '\0')
	{
		*dest_ptr++ = *src++;
		i++;
	}
	*dest_ptr = '\0';
	return (dest);
}
