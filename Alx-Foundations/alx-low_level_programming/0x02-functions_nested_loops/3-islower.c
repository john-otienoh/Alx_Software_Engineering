#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 * @c:  -  stores the character
 *
 * Return: 1 if c is lowercase or 0 for anything else
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
