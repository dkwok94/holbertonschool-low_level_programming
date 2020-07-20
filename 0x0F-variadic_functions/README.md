# 0x0F. C - Variadic functions

## Overview
The goal of this project was to learn about variadic functions and how to use the `va_start`, `va_arg`, and `va_end` macros. The `const` type qualifier was also learned as well.

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
* You are allowed to use [`_putchar`](https://github.com/dhkschool/_putchar.c/blob/master/_putchar.c)
* The prototypes of all your functions should be included in your header file called `variadic_functions.h`
* All your header files should be include guarded

## Tasks
### Mandatory
**[0-sum_them_all.c](0-sum_them_all.c)** - Function returns the sum of all its parameters
```
$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-sum_them_all.c -o a
$ ./a 
1122
500
```

**[1-print_numbers.c](1-print_numbers.c)** - Function prints numbers followed by a new line. `printf` is allowed and if `separator` is null, don't print it.
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-print_numbers.c -o b
$ ./b
0, 98, -1024, 402
```

**[2-print_strings.c](2-print_strings.c)** - Function prints strings followed by a new line.
```
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_strings.c -o c
$ ./c 
Jay, Django
```

**[3-print_all.c](3-print_all.c)** - Function prints anything. The `format` is a list of types of arguments that can be passed to the function.
```
$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-print_all.c -o d
$ ./d 
H, 0, lberton
```


2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [DHK School](https://www.dhkschool.com/)
