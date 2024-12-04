#include "monty.h"
void my_push()
{
	int my_data;
	if (top == SIZE - 1)
	{
		printf("Stack Overflow");
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("Enter an integer: ");
		scanf("%d", &my_data);
		top++;
		my_stack[top] = my_data;
	}

}
