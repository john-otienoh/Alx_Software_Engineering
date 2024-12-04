#include "monty.h"
int top = -1;
int my_stack[SIZE];

int main()
{
	int choice;
	int i;

        while (1)
        {
                printf("Enter 1: push or 2: pall\n: ");
                scanf("%d", &choice);

                switch (choice)
                {
                        case 1:
                                my_push();
                                break;
                        case 2:
                                my_pall();
                                break;
                        default:
                                printf("Neither 1 or 2");
                                break;
                }
	}
	return (0);
}
