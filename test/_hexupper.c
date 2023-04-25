#include "main.h"

/**
 * _hexupper - print a number in base hexa with upper case
 * @n: an integer parameter
 */

void _hexupper(unsigned int n)
{
	char c;

	if (n / 16 != 0)
		_hexupper(n / 16);
	if (n % 16 <= 9)
	{
		c = n % 16 + '0';
		wrchar(c);
	}
	else
		switch (n % 16)
		{
		case 10:
			wrchar('A');
			break;
		case 11:
			wrchar('B');
			break;
		case 12:
			wrchar('C');
			break;
		case 13:
			wrchar('D');
			break;
		case 14:
			wrchar('E');
			break;
		case 15:
			wrchar('F');
		}
}
