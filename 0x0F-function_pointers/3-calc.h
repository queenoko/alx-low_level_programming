#ifndef CALC_H
#define CALC_H

/*
 * File: 3-calc.h
 * Author: Queensly Udongwo
 * Description: Header file containing all structures and prototype
 * used in 3-main.c
 */

/**
 * struct op - A struct op
 * @op: The operator
 * @f: Associated function
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);


#endif
