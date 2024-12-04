#include "main.h"
#include <string.h>
/**
 * my_pali - palindrome helper function
 * @start: start of the string.
 * @end: end of string
 * Return: 1 if palindrome, else 0.
 */
int my_pali(char *start, char *end)
{
	if (end < start)
		return (1);
	if (*start != *end)
		return (0);
	return (my_pali(start + 1, end - 1));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to a string
 *
 * Return: 1 if palindrome, else 0.
 *
 */
int is_palindrome(char *s)
{
	return (my_pali(s, s + strlen(s) - 1));
}
