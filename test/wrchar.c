#include "main.h"

/**
 * wrchar - write a character each time
 * @n: an integer
 * Return: 1 success or 0 field
 */

int wrchar(int n)
{
	return (write(1, &n, 1));
}
