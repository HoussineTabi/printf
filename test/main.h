#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
int _printf(const char *foramt, ...);
void _print_number(int);
int wrchar(int);
void _binar(int);
void _octal(int);
void _hexupper(int);
void _hexlower(int);
void _unsig(int);
void _print_numberu(unsigned int);

#endif /* MAIN_H */
