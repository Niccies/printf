#include "main.h"

/**
 * get_size - Calculates the size to cast the arguments
 * @format: Formatted strings in which to print the arguments
 * @f: Lists of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *f)
{
	int curr_f = *f + 1;
	int size = 0;

	if (format[curr_f] == 'l')
		size = S_LONG;
	else if (format[curr_f] == 'h')
		size = S_SHORT;

	if (size == 0)
		*f = curr_f - 1;
	else
		*f = curr_f;

	return (size);
}
