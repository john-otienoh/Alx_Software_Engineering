#include "main.h"
/**
 * _puts - function that prints string
 * @str: string to be printed
 * Return: Character printed
 */

int _puts(char *str)
{
	int i = 0, count = 0;

	if (str)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			count++;
			i++;
		}
	}
	return (count);
}
