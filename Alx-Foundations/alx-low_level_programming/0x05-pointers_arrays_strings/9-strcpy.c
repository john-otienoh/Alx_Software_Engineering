#include "main.h"
#include <string.h>
/**
 * _strcpy - function that copies the string pointed to by src,
 *  including the terminating null byte (\0), to the buffer pointed to by dest
 *  @dest: the string being copied into
 *  @src: the string to be copied
 *  Return: always 0(success)
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
