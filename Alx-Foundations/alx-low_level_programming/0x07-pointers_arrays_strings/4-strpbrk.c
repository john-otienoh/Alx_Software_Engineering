#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: pointer to a string
 * @accept: pointer to a string.
 * Return: pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
				return (s);
			temp++;
		}
		s++;
	}
	return (NULL);
}
