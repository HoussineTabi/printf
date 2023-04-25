#include "main.h"

/**
 * _unsig - convert an integer to an unsigned number
 * @n: the first parameter
 */

void _unsig(int n)
{
	int u;

	if (n < 0)
	{
		u = UINT_MAX;
		while (n < 0)
		{
			if (n < -10000)
			{
				u = u - 10000;
				n += 10000;
			}
			else
			{
				u--;
				n++;
			}
		}
		u++;
		_print_numberu(u);
	}
	else
		_print_number(n);
}

/**
 * _print_numberu - convert an int to an unsigned number
 * @n: integer parameter
 */
void _print_numberu(unsigned int n)
{
	char c;

	if (n / 10 != 0)
		_print_numberu(n / 10);
	c = n % 10 + 48;
	wrchar(c);
}
