#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Function that prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int hour, min, h1, h2, m1, m2;

	for (hour = 0; hour < 24; ++hour)
	{
		h1 = hour / 10;
		h2 = hour % 10;
		for (min = 0; min <= 59; ++min)
		{
			m1 = min / 10;
			m2 = min % 10;
			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar('\n');
		}
		min = 0;
	}
}
