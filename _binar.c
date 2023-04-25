#include "main.h"

/**
 * _binar - print an integer in base 2
 * @n: integer number
 */
void _binar(unsigned int n)
{
	char c;

	if (n / 2 != 0)
		_binar(n / 2);
	c = n % 2 + '0';
	wrchar(c);
}
/**
 * len_bin - the length of the form binary of an int
 * @n: the number
 * Return: the length
 */
int len_bin(unsigned int n)
{
	if (n / 2 != 0)
		return ( 1 + len_bin(n / 2));
	return (1);
}
