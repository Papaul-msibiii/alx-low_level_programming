#include "main.h"

/**
 * print_alphabet_x10 - function that print alphabet 10 times
 *
 * _putchar: function that print alphabet
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
