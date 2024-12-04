#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string.
 * @s: the string
 * Return: always 0(success)
 */
void rev_string(char *s)
{
	int rev, i, j;
	char temp;

	rev = strlen(s);
	for (i = 0, j = rev - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
