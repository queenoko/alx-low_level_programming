#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * File: variadic_functions.h
 * Author: Queensly Udongwo
 * Description: Header file containing prototypes for all functions
 */

#include <stdarg.h>

/**
 * struct printer - New struct tupe defining a printer
 * @symbol: symbol representing a datatype
 * @print: Function pointer to a function that prints a datatype corresponding
 * to symbol
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
