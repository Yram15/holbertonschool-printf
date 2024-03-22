#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: A character string containing zero or more directives
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    char *str_arg;
    int int_arg;
    char char_arg;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'c':
                    char_arg = va_arg(args, int);
                    putchar(char_arg);
                    count++;
                    break;
                case 's':
                    str_arg = va_arg(args, char *);
                    while (*str_arg)
                    {
                        putchar(*str_arg++);
                        count++;
                    }
                    break;
                case '%':
                    putchar('%');
                    count++;
                    break;
                case 'd':
                case 'i':
                    int_arg = va_arg(args, int);
                    printf("%d", int_arg);
                    count++;
                    break;
                default:
                    putchar('%');
                    putchar(*format);
                    count += 2;
                    break;
            }
        }
        else
        {
            putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}

