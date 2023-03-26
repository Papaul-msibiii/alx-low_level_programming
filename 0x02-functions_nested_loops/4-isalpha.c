#include "main.h"

/**
 * _isalpha - function that print alphabet
 *
 * @c: parameter to print
 *
 * Return: 1 if it is alphabetic character
 * and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
