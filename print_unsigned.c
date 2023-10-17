#include "main.h"

/**
* print_unsigned - prints an unsigned number
* @arg: argument list
* @buffer: buffer array
* @width: width specifier
* @precision: precision specifier
* @size: size specifier
* @flags: active flags
* Return: unsigned int
*/

int print_unsigned(va_list arg, char buffer[],
         int width, int precision, int size, int flags)
{
        int i = BUFF_SIZE - 2;
        unsigned long int n = va_arg(arg, unsigned long int);

        n = convert_size_unsigned(n, size);
        if (n == 0)
                buffer[i--] = '0';
        buffer[BUFF_SIZE - 1] = '\0';

        while (n > 0)
        {
                buffer[i--] = (n % 10) + '0';
                n = n / 10;
        }
        i++;
        return (write_unsigned(0, i, buffer,size, width, precision, flags));