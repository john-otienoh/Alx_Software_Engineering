#include "main.h"
#include <string.h>
/**
 * _strlen - function that returns the length of a string.
 * @s: the string
 * Return: Always 0(success0
 */
int _strlen(char *s)
{
	int str_ing = 0;

	while (s[str_ing] != '\0')
	{
		str_ing++;
	}
	return (str_ing);
}
