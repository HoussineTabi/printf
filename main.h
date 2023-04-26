#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
int _printf(const char *foramt, ...);
void _print_number(int);
int wrchar(int);
int lengnum(int);
int len_bin(unsigned int);
int len_uns(unsigned int);
int _print_string(char *);
void _binar(unsigned int);
int _octal(unsigned int);
void _hexupper(unsigned int);
void _hexlower(unsigned int);
void _unsig(int);
int _print_numberu(unsigned int);

#endif /* MAIN_H */
