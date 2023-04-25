#include "main.h"

/**
 * _binar - print an integer in base 2
 * @n: integer number
 */
int _binar(unsigned int n)
{
	char c;

	c = n % 2 + '0';
	wrchar(c);
	if (n / 2 != 0)
		return (1 + _binar(n / 2));
	return (1);
}
