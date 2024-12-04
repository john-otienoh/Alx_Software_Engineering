#include "main.h"
/**
 * _strchr -  function that locates a character in a string.
 * @s: a string.
 * @c: a charcter.
 * Return: pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
