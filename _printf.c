#include "main.h"

/**
 * _printf - is a funciton that print differnt type of data
 * @format: the first parameter to specifie the type of data
 * Return: an integer to success
 */
int _printf(const char *format, ...)
{
	va_list ap;
	const char *p = format;
	int i = 0;

	va_start(ap, format);
	while (*p != '\0')
	{
		if (*p == '%')
		{
			p++;
			switch (*p)
			{
			case 's':
				i += _print_string(va_arg(ap, char*));
				break;
			case '%':
				i += wrchar(*p);
				break;
			case 'c':
				i += wrchar(va_arg(ap, int));
				break;
			case 'i':
				i += 4;
				_print_number(va_arg(ap, int));
				break;
			case 'd':
				i += 4;
				_print_number(va_arg(ap, int));
				break;
			case 'b':
				_binar(va_arg(ap, int));
				break;
			case 'u':
				_unsig(va_arg(ap, int));
				break;
			case 'o':
				_octal(va_arg(ap, unsigned int));
				break;
			case 'X':
				_hexupper(va_arg(ap, int));
				break;
			case 'x':
				_hexlower(va_arg(ap, int));
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

/**
 * _print_string - printing string
 * @s: the string
 * Return: the number of character printed
 */
int _print_string(char *s)
{
	int i = 0;

	while (s != NULL && *s)
	{
		i += wrchar(*s);
		s++;
	}
	return (i);
}
