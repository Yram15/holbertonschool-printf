#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>


/**
 * struct print_struct - ...
 * @indi: ...
 * @handler: ...
 */
typedef struct print_struct
{
char *indi;
int (*handler)(va_list agrs);
} print;

/* Function prototypes for _printf and additional functions */
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_mod(va_list args);
int print_int(va_list args);
int _putchar(char c);
int print_reverse(va_list args);
int (*get_print(char format))(va_list);
#endif
