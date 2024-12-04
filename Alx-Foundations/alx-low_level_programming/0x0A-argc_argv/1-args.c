#include <stdio.h>
/**
 * main - Entry Point of the program.
 * @argc: Argument count.
 * @argv: A character array
 * Return: Always 0(success).
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	int n;

	n = argc - 1;
	printf("%d\n", n);
	return (0);
}
