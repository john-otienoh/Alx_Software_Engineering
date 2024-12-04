#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: pointer to a string
 * @needle: pointer to a string.
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int needle_len, haystack_len, i, j;

	haystack_len = 0;
	needle_len = 0;
	while (needle[needle_len] != '\0')
		needle_len++;
	while (haystack[haystack_len] != '\0')
		haystack_len++;
	for (i = 0; i <= haystack_len - needle_len; i++)
	{
		while (j < needle_len)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		j++;
	}
	if (j == needle_len)
		return ((char *)&haystack[i]);
	return (NULL);
}
