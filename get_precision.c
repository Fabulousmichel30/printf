#include "main.h"

/**
 * get_precision - Computes the precision for printing
 * @format: Formatted string containing conversion specifier
 * @start_pos: Start position of the precision field in the format string
 * @list: va_list containing the arguments to be printed
 *
 * Return: The computed precision, or -1 if none is specified
 */
int get_precision(const char *format, int *start_pos, va_list list)
{
	int curr_pos = *start_pos + 1;
	int precision = -1;

	/* Check if precision field is present */
	if (format[curr_pos] != '.')
		return (precision);

	/* Compute the precision value */
	precision = 0;
	for (curr_pos += 1; format[curr_pos] != '\0'; curr_pos++)
	{
		if (is_digit(format[curr_pos]))
		{
			precision *= 10;
			precision += format[curr_pos] - '0';
		}
		else if (format[curr_pos] == '*')
		{
			curr_pos++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	/* Update start_pos to reflect the end of the precision field */
	*start_pos = curr_pos - 1;

	return (precision);
}

