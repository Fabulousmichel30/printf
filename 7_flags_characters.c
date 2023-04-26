#include "main.h"

/**
 * get_pointer_argument - Retrieves the next argument of type void * from a va_list
 * @args: va_list of arguments to retrieve the pointer argument from
 * @format: The format string being parsed
 *
 * Return: The next void * argument from the va_list.
 */
void *get_pointer_argument(va_list args, const char *format)
{
	void *ptr;

	switch (*format)
	{
	case 'p':
		ptr = va_arg(args, void *);
		break;
	case 'd':
	case 'i':
		ptr = &(va_arg(args, int));
		break;
	case 'u':
	case 'o':
	case 'x':
	case 'X':
	case 'b':
		ptr = &(va_arg(args, unsigned int));
		break;
	case 'c':
		ptr = &(va_arg(args, char));
		break;
	case 's':
		ptr = va_arg(args, char *);
		break;
	default:
		ptr = NULL;
		break;
	}

	return (ptr);
}

