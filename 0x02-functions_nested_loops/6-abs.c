#include "main.h"

/**
 * _abs - function that print the absolute value
 *
 * @n: function parameter
 *
 * Return: always number
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else
		n = n;
	return (n);
}
