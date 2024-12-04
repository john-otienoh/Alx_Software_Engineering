#include "monty.h"
void my_pall()
{
	int choice;
	int i;

	if (top == -1)
	{
		printf("Stack Empty\n");
		exit(EXIT_FAILURE);
	}
	for (i = top; i >= 0; i--)
	{
		printf("%d\n", my_stack[i]);
	}
}
