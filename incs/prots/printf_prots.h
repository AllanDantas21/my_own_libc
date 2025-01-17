#ifndef PRINTF_PROTS_H
#define PRINTF_PROTS_H

int     my_printf_address(void *pointer);
int     my_print_unsigned(unsigned int n);
int     my_print_string(const char *str);
int     my_print_hexa(unsigned int n);
int     my_print_hexa_upper(unsigned int n);
int     my_print_decimal(int decimal);
int     my_print_char(char c);
char	*utoa_base(unsigned long long n, int base, char *chr);

#endif