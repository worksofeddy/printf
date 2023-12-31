#include "main.h"
/**
*print_reverse - prints reverse str.
*@buffer: buffer array
*@arg: list of arguments
*@flags: calc active flags
*@precision: precision specifier
*@size: size specifier
*@width: calc width
*Return: Number of chat printed .
*
*/

int print_reverse(va_list arg, char buffer[], int flags,
	int width, int precision, int size)
{
	char *s;
	int i, count = 0;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(size);

	s = va_arg(arg, char *);

	if (s == NULL)
	{
		UNUSED(precision);

		s = ")Null(";
	}
	for (i = 0; s[i]; i++)
		;

	for (i = i - 1; i >= 0; i--)
	{
		char k = s[i];

		write(1, &k, 1);
		count++;
	}
	return (count);
}

