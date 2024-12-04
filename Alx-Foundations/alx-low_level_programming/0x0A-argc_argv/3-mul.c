#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * @argc: Argument count.
 * @argv: A character array.
 * Return: Always 0(success), else return 1 if (argc < 2).
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
