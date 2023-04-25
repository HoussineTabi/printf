#include "main.h"
/**
 * _hexlower - print an integer in base hexa with lower case litter
 * @n: an integer
 */

void _hexlower(unsigned int n)
{
	char c;

	if (n / 16 != 0)
		_hexlower(n / 16);
	if (n % 16 <= 9)
	{
		c = n % 16 + '0';
		wrchar(c);
	}
	else
		switch (n % 16)
		{
		case 10:
			wrchar('a');
			break;
		case 11:
			wrchar('b');
			break;
		case 12:
			wrchar('c');
			break;
		case 13:
			wrchar('d');
			break;
		case 14:
			wrchar('e');
			break;
		case 15:
			wrchar('f');
		}
}
/**
 * len_uns - length of an unsigned numebr
 * @n: the unsigned number
 * Return: the length
 */
int len_uns(unsigned int n)
{
	int i = 1;

	if (n == 0)
		return (1);
	while (n / 10 != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}
