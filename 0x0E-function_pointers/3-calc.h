#ifndef OPS_H
#define OPS_H

/**
 *struct op - has an operator character and a function pointer
 *@op: pointer to an operator character
 *@f: pointer to a function that takes two ints and returns an int
 *
 *Description: this structure will be placed in an array of structures
 *of this type
 */
typedef struct op
{
	char *op;
	int (*f)(int, int);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
