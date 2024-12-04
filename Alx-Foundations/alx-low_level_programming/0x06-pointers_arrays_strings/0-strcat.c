#include "main.h"
#include <string.h>
/**
 * _strcat -  a function that concatenates two strings.
 * @dest: original string.
 * @src: string to be appended.
 * Return: pointer to the resulting string dest.
 *
 */
char *_strcat(char *dest, char *src)
{
	int i = strlen(dest), j;

	for (j = 0; src[j] != '\0'; i++, j++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
