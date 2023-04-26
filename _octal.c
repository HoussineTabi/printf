#include "main.h"

/**
 * _octal - print an integer in base 8
 * @n: an integer parameter
 */

int _octal(unsigned n)
{
	char c;

	c = n % 8 + '0';
	if (n / 8 != 0)
		return (wrchar(c) + _octal(n / 8));
	return (1);
}
