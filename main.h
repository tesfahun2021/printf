#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
/**
 * struct print - print type with corresponding print function
 * @t: print type
 * @f: print function
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int print_u(va_list num);
int print_oct(va_list o);
int print_b(va_list num);
int print_pointer(va_list o);
int print_num(long n);
int _putchar(char c);
int print_percent(va_list args);
int print_hex(va_list h);
int print_Hex(va_list h);
int printStr(char *str);
void rev_string(char *s);
int (*get_fun(char x))(va_list args);
char *string_toupper(char *s);
char *convert(unsigned long num, int base);

#endif
