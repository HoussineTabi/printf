#include "main.h"

/**
 * _printf - is a funciton that print differnt type of data
 * @format: the first parameter to specifie the type of data
 * Return: an integer to success
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int nu;
	const char *p = format;
	int i = 0;
	char *pr;
	va_start(ap, format);
	while (*p != '\0')
	{
		if (*p == '%')
		{
			p++;
			switch (*p)
			{
			case 's':
				pr = va_arg(ap, char*);
				while (*pr != '\0')
				{
					i += wrchar(*pr);
					pr++;
				}
				break;
			case '%':
				i += wrchar(*p);
				break;
			case 'c':
				nu = va_arg(ap, int);
				i += wrchar(nu);
				break;
			case 'i':
				nu = va_arg(ap, int);
				i += 4;
				_print_number(nu);
				break;
			case 'd':
				nu = va_arg(ap, int);
				i += 4;
				_print_number(nu);
				break;
			case 'b':
				nu = va_arg(ap, int);
				_binar(nu);
				break;
			case 'u':
				nu = va_arg(ap, int);
				_unsig(nu);
				break;
			case 'o':
				nu = va_arg(ap, int);
				_octal(nu);
				break;
			case 'X':
				nu = va_arg(ap, int);
				_hexupper(nu);
				break;
			case 'x':
				nu = va_arg(ap, int);
				_hexlower(nu);
				break;
			default:
				i += wrchar(*(p - 1));
				i += wrchar(*p);
				break;
			}
		}
		else
			i += wrchar(*p);
		p++;
	}
	va_end(ap);
	return (i);
}
