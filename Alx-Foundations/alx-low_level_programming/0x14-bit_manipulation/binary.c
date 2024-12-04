#include "main.h"
#include <stdio.h>
void binaryRecurse(unsigned int n);
int main(void)
{
	binaryRecurse(98);
	return (0);
}
void binaryRecurse(unsigned int n)
{
	unsigned int rem, rev, count = 0, index = 0;

	if (n <= 0)
	{
		return;
	}
	else
	{
		rem = n % 2;
		binaryRecurse(n / 2);
                printf("%d", rem);
	}
/*	while (rem > 0)
	{
		rev = rem % 10;
		if (count == index)
        	{
                	printf("%d", rev);
        	}
        	count++;
		rem = rem / 10;
	}*/
}
