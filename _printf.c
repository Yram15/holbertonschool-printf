#include “main.h”
Void print_buffer(char buffer[ ], int *buff_ind);
/**
* _printf - printf function
* @format: format
* Return: printed chars
*/
Int _printf(const char *format, …)
{
Int i, printed = 0, printed_charr = 0;
Int flags, width, precision, size, buff_int = 0;
Va_list list;
Char buffer[BUFF_SIZE];
If (format == NULL)
Return (-1);
va_start(list, format);
for (i = 0; format && format[i] != ‘\0’; i++)
{
if (format[i] != ‘%’)
{
Buffer[buff_ind++] = format[i];
if (buff_ind == BUFF_SIZE)
print_buffer(buffer, &buff_ind);
/* write(1, &format[i], 1);*/
printed_chars++;
}
else
{
print_buffer(buffer, &buff)ind);
Flags = get_flags(format, &i,);
Width = get_width(format, &i, list);
precision = get_precision(format, &i,);
size = get_size(format, &i,);
I++;
printed = handle_print(format, &i, list, buffer, flags, width, precision, size);
If (printed == -1)
Return (-1);
Printed_chars += printed;
}
}
print_buffer(, &buff_ind);
va_end(list);
return (printed_chars);
}
/**
* print_buffer - prints the contents of the buffer if it exist
* @buffer: array of chars
* @buff_ind: index at which to add next char, represents the length
*/
Void print_buffer(char buffer[], int *buff_ind)
{
If (*buff_ind > 0)
write(1, &buffer[0], *buff_ind);
*buff_ind = 0;
}
