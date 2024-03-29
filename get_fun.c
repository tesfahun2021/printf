#include "main.h"

/**
 * get_fun - look for the print
 * @x: variable to the function
 * Return: function
 */
int (*get_fun(char x))(va_list)
{
	int i = 0;
	print_t arr[] = {{"c", print_c},
					 {"s", print_s},
					 {"%", print_percent},
					 {"d", print_d},
					 {"u", print_u},
					 {"i", print_i},
					 {"x", print_hex},
					 {"X", print_Hex},
					 {"o", print_oct},
					 {"p", print_pointer},
					 {"b", print_b},
					 {NULL, NULL}};

	while (arr[i].t)
	{
		if (x == arr[i].t[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}
