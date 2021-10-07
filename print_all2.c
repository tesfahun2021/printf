#include "main.h"

/**
 * print_u - prints an unsigned int
 * @num: arg list
 *
 * Return: number of printed character
 */
int print_u(va_list num)
{
	unsigned int n = va_arg(num, int);

	return (print_num(n));
}

/**
 * print_num - prints an int
 * @n: int to print
 *
 * Return: number of printed character
 */
int print_num(long n)
{
	int i = 0;

	/* If number is smaller than 0, put a - sign and change number to positive */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		i++;
	}
	/* Remove the last digit and recur */
	if (n / 10)
	{
		i++;
		print_num(n / 10);
	}
	/* Print the last digit */
	_putchar(n % 10 + '0');

	return (i + 1);
}
