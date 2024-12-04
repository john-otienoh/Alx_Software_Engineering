#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: a pointer to a string.
 * Return: The length of teh string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	length = 1 + _strlen_recursion(s + 1);
	return (length);
}
