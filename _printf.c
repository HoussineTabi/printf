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
	int i = 0, nu;
	char *pr = malloc(sizeof(char) * 20);
	unsigned int un;

	if (p == NULL)
		return (0);
	va_start(ap, format);
	while (*p != '\0')
	{
		if (*p == '%')
		{
			p++;
			if (!*p)
				return (i);
			switch (*p)
			{
			case 's':
				i += _print_string(va_arg(ap, char*));
				break;
			case 'p':
				if (pr != NULL)
				{
				sprintf(pr, "%p", (void *) va_arg(ap, void *));
				i += _print_string(pr);
				}
				break;
			case '%':
				i += wrchar(*p);
				break;
			case 'c':
				i += wrchar(va_arg(ap, int));
				break;
			case 'i':
				nu = va_arg(ap, int);
				i += lengnum(nu);
				_print_number(nu);
				break;
			case 'd':
				nu = va_arg(ap, int);
				i += lengnum(nu);
				_print_number(nu);
				break;
			case 'b':
				un = va_arg(ap, unsigned int);
				i += len_bin(un);
				_binar(un);
				break;
			case 'u':
				nu = va_arg(ap, int);
				i += lengnum(nu);
				_unsig(nu);
				break;
			case 'o':
				un = va_arg(ap, unsigned int);
				i += 2 * len_uns(un);
				_octal(un);
				break;
			case 'X':
				un = va_arg(ap, unsigned int);
				i += len_uns(un);
				_hexupper(un);
				break;
			case 'x':
				un = va_arg(ap, unsigned int);
				i += len_uns(un);
				_hexlower(un);
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
		free(pr);
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

	if (s == NULL || s == (void*)0)
		return (0);
	while (s != NULL && *s)
	{
		i += wrchar(*s);
		s++;
	}
	return (i);
}
