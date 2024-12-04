#include <unistd.h>
#include "main.h"
/**
 * _putchar - function that prints one character at a time to the buffer
 * @c: Character to be printed
 * Return: Write()
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

