# 0x07. C - Recursion

## Overview
The goal of this project was to understand how recursion works and what the operations look like on the stack and how to use recursion in other tasks.

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
* The prototypes of all your functions should be included in your header file called `holberton.h`
* All your header files should be include guarded
* No loops of any kind
* No static variables

## Tasks
### Mandatory
**[0-puts_recursion.c](0-puts_recursion.c)** - Function prints a string followed by a new line
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
$ ./0-puts_recursion 
Betty Holberton
```

**[1-print_rev_recursion.c](1-print_rev_recursion.c)** - Function prints a string in reverse
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
$ ./1-print_rev_recursion 
reklaW notloC
```

**[2-strlen_recursion.c](2-strlen_recursion.c)** - Function returns the length of a string
```
$ gcc -Wall -pedantic -Werror -Wextra  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
$ ./2-strlen_recursion 
14
```

**[3-factorial.c](3-factorial.c)** - Function returns the factorial of a given number
```
$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-factorial.c -o 3-factorial
$ ./3-factorial 
1
120
3628800
-1
```

**[4-pow_recursion.c](4-pow_recursion.c)** - Function returns the value of x raised to the power of y
```
$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-pow_recursion.c -o 4-pow
$ ./4-pow 
1
1
65536
25
-1
-125
```

**[5-sqrt_recursion.c](5-sqrt_recursion.c)** - Function returns the natural square root of a number
```
$gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-sqrt_recursion.c -o 5-sqrt
$ ./5-sqrt 
1
32
4
-1
5
-1
```

**[6-is_prime_number.c](6-is_prime_number.c)** - Function returns 1 if number is prime, and 0 otherwise
```
$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 6-is_prime_number.c -o 6-prime
$ ./6-prime 
0
0
0
1
0
0
1
1
```

**[7-is_palindrome.c](7-is_palindrome.c)** - Function returns 1 if string is a palindrome and 0 otherwise
```
$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 7-is_palindrome.c -o 7-palindrome
$ ./7-palindrome 
1
1
0
1
```

2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [Holberton School](https://www.holbertonschool.com/)
