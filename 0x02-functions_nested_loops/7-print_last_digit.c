#include "main.h"

/**
 * print_last_digit - functionn that print last digit
 *
 *  @i: function parameter
 *
 * _putchar: print the reminder
 *
 *  Return: k
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 10)
		k = -k;
	_putchar(k + '0');
	return (k);
}
