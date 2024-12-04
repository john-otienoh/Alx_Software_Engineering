#include "main.h"
/**
 * _isalpha - function that checks for alphabetic  character.
 * @c:  -  stores the character
 *
 * Return: 1 if c is an alphabet or 0 for anything else
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
