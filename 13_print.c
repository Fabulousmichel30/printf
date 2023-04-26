#include "main.h"

/**
 * format_with_custom_specifier - A function that formats a string with a custom
 * conversion specifier 'r' that prints the reversed string.
 * @fmt_str: The format string.
 */
void format_with_custom_specifier(char *fmt_str, ...)
{
	va_list args;
	va_start(args, fmt_str);
	int i = 0;
	while (i < strlen(fmt_str))
	{
		if (fmt_str[i] == '{' && i + 2 < strlen(fmt_str) && fmt_str[i + 2] == '}')
		{
			int arg_index = fmt_str[i + 1] - '0';
			if (arg_index >= 0)
			{
				char *arg = va_arg(args, char *);
				if (fmt_str[i + 3] == 'r')
				{
					for (int j = strlen(arg) - 1; j >= 0; j--)
					{
						putchar(arg[j]);
					}
					i += 4;
					continue;
				}
			}
		}
		putchar(fmt_str[i]);
		i++;
	}
	va_end(args);
}

/**
 * main - The main function that calls the format_with_custom_specifier function.
 * Return: Always 0.
 */
int main(void)
{
	char *format_str = "The reversed string of '{0}' is '{0:r}'.";
	char *arg = "hello world";
	format_with_custom_specifier(format_str, arg);
	putchar('\n');
	return (0);
}

