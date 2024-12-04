#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * @argc: Argument Count
 * @argv: A character array
 * Return: Always 0(Success) else return 1 if no argument is passed.
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
