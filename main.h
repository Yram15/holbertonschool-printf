#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/

    struct buffer_s - A new type defining a buffer struct.
    @buffer: A pointer to a character array.
    @start: A pointer to the start of buffer.
    @len: The length of the string stored in buffer.

/
typedef struct buffer_s
{
charbuffer;
char *start;
unsigned int len;
} buffer_t;
/

    struct converter_s - A new type defining a converter struct.
    @specifier: A character representing a conversion specifier.
    @func: A pointer to a conversion function corresponding to specifier.

/
typedef struct converter_s
{
unsigned char specifier;
unsigned int (func)(va_list, buffer_t *,
unsigned char, int, int, unsigned char);
} converter_t;
/**

    struct flag_s - A new type defining a flags struct.
    @flag: A character representing a flag.
    @value: The integer value of the flag.

/
typedef struct flag_s
{
unsigned char flag;
unsigned char value;
} flag_t;
/ Conversion Specifier Functions /
unsigned int convert_c(va_list args, buffer_toutput,
unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_s(va_list args, buffer_t output,
unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_di(va_list args, buffer_toutput,
unsigned char flags, int wid, int prec, unsigned char len);
{
