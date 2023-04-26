#include "main.h"
/**
 * _print_number - this funchtion print a number
 *@n: param integer
 */
void _print_number(int n)
{
	char c;

	if (n < 0)
	{
		c = '-';
		wrchar(c);
		n = n * -1;
	}
	if (n / 10 > 0)
		_print_number(n / 10);
	c = n % 10 + '0';
	wrchar(c);
}
/**
 * lengnum - calculate the length of a number
 * @n: in integer
 * Return: the leng of the number
 */
int lengnum(int n)
{
	int i = 1;
	if (n < 0)
		i = 2;
	while (n / 10 != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}
