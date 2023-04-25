#include "main.h"

/**
 * _octal - print an integer in base 8
 * @n: an integer parameter
 */

void _octal(int n)
{
	char c;

	if ( n / 8 != 0)
		_octal(n / 8);
	c = n % 8 + '0';
	wrchar(c);
}
