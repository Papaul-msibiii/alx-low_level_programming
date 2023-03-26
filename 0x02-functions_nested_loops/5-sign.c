#include "main.h"

/**
 * print_sign - function that print the sign of a number
 *
 * @n: parameter that printed
 *
 * _putchar: function that print character
 *
 * Return: 1 if number is greater than 0
 * -1 if number is less than 0
 *  and 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+' + 0);
		/*_putchar(',');*/
		/*_putchar(' ');*/
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-' + 0);
		/*_putchar(',');*/
		/*_putchar(' ');*/
		return (-1);
	}
	else
	{
		_putchar('0' + 0);
		/*_putchar(',');*/
		/*_putchar(' ');*/
		return (0);
	}
}
