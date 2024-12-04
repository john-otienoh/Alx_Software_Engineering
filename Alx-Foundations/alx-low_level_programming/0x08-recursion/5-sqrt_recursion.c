#include "main.h"
/**
 * my_sqrt - sqrt helper function
 * @n: The number
 * @root: the root value
 * Return: The  root
 */
int my_sqrt(int n, int root)
{
	if ((root * root) > n || n < 0)
		return (-1);
	else if ((root * root) == n)
		return (root);
	else
		return (my_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: The number
 * Return: natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (my_sqrt(n, 0));
}
