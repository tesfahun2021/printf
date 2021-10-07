#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0, len = 0;
	char temp;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
/**
 * decToHexa - convert decimal to hexadecimal
 * @n: number to convert
 *
 * Return: converted string
 */
char *decToHexa(unsigned long n)
{
	int i = 0; /* counter for hexadecimal number array */
	/* allocate char array to store hexadecimal number */
	char *hexaDeciNum = (char *)malloc(sizeof(char) * 15);

	if (!hexaDeciNum)
		return (NULL);

	while (n != 0)
	{
		/* temporary variable to store remainder */
		int temp = 0;

		temp = n % 16;
		if (temp < 10)
			hexaDeciNum[i] = temp + '0';
		else
			hexaDeciNum[i] = temp + 'a' - 10;
		i++;
		n = n / 16;
	}
	hexaDeciNum[i] = '\0';
	rev_string(hexaDeciNum);
	return (hexaDeciNum);
}

/**
 * decToOctal - convert decimal to octal
 * @n: number to convert
 *
 * Return: converted string
 */
char *decToOctal(unsigned long n)
{
	int i = 0; /* counter for octal number array */
	/* allocate char array to store octal number */
	char *octal = (char *)malloc(sizeof(char) * 15);

	if (!octal)
		return (NULL);

	while (n != 0)
	{
		/* storing remainder in octal array */
		octal[i] = '0' + n % 8;
		n = n / 8;
		i++;
	}
	octal[i] = '\0';
	rev_string(octal);
	return (octal);
}

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string
 * Return: uppercase string
*/
char *string_toupper(char *s)
{
	char *t = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 'a' - 'A';
		s++;
	}
	return (t);
}

/**
 * printStr - prints a string
 * @str: string to print
 *
 * Return: number of printed character
 */
int printStr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
