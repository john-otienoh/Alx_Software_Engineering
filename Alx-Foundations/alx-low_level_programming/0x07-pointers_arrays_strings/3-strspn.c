#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer to a string.
 * @accept: pointer to astring.
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length, len1, len2, i, j, found;

	len1 = strlen(s);
	len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		found = 0;
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
			break;
		length++;
	}
	return (length);
}
