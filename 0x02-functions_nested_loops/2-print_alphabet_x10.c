#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times
 * return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;
	i = 0;
	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);}
		_putchar('\n');
		i++;
	}


}
