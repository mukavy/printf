#include "main.h"

/**
 * get_size - It calculates the size to cast the argument
 * @format: Formats string in which to print the arguments
 * @i: The list of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *d)
{
	int curr_d = *d + 1;
	int size = 0;

	if (format[curr_d] == 'l')
		size = S_LONG;
	else if (format[curr_d] == 'h')
		size = S_SHORT;

	if (size == 0)
		*d = curr_d - 1;
	else
		*d = curr_d;

	return (size);
}

