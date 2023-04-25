#include "main.h"
/**
 * _hexalower - print an integer in base hexa with lower case litter
 * @n: an integer
 */

void _hexlower(int n)
{
	char c ;

	if (n / 16 != 0)
		_hexlower(n / 16);
	if (n % 16 >= 0 && n % 16 <= 9)
	{
		c = n % 16 + '0';
		wrchar(c);
	}
	else
		switch(n % 16)
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
