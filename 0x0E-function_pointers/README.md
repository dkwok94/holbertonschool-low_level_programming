# 0x0E. C - Function pointers

## Overview
The goal of this project was to learn what function pointers were and how to use them. What a function pointer holds and where does a function pointer point to in virtual memory were also learned.

## Requirements
### C Scripts
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags `-Wall -Werror -Wextra and -pedantic`
* All your files should end with a new line
* Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
* You are allowed to use [`_putchar`](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* The prototypes of all your functions should be included in your header file called `function_pointers.h`
* All your header files should be include guarded

## Tasks
### Mandatory
**[0-print_name.c](0-print_name.c)** - Function prints a name
```
$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_name.c -o a
$ ./a 
Hello, my name is Danton
Hello, my uppercase name is RICK HARRIS
```

**[1-array_iterator.c](1-array_iterator.c)** - Function executes a function given as a parameter on each element of an array
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-array_iterator.c -o b
$ ./b 
0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000
```

**[2-int_index.c](2-int_index.c)** - Function searches for an integer
```
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-int_index.c -o c
$ ./c 
2
1
2
```

**[3-main.c](3-main.c)** - Main function that calls a specific operation of the calculator

**[3-op_functions.c](3-op_functions.c)** - Contains all functions for addition, subtraction, multiplication, division, and modulus

**[3-get_op_func.c](3-get_op_func.c)** - Function that contains an array of structures which decide which function pointer to pass back based on what character is read in

**[3-calc.h](3-calc.h)** - The header file for the calculator program that contains prototypes and structure definitions

* The following struct could be used:
```
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
```

The following structure could be used:
```
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
```
```
$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
$ ./calc 1 + 1
2
$ ./calc 97 + 1
98
$ ./calc 1024 / 10
102
$ ./calc 1024 '*' 98
100352
$ ./calc 1024 '\*' 98
Error
$ ./calc 1024 - 98
926
$ ./calc 1024 '%' 98
44
```

2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [Holberton School](https://www.holbertonschool.com/)
