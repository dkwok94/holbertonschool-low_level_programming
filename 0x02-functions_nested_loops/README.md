# 0x02. C - Functions, nested loops

## Overview
This project got us more familiar with nested loops, functions and how to use them, the differences between declarations and functions, prototypes, header files, and variable scope.

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
* The prototypes of all your functions should be included in your header file called `dhk.h`
* All your header files should be include guarded

## Tasks
### Mandatory
**[0-dhk.c](0-dhk.c)** - This program prints ```DHK``` followed by a new line using a ```_putchar``` function contained in another file. This was to help us get used to using custom header files
```
$  gcc -Wall -pedantic -Werror -Wextra _putchar.c 0-dhk.c -o 0-dhk
$ ./0-dhk 
DHK
```

**[1-alphabet.c](1-alphabet.c)** - This function prints the alphabet, in lower case, followed by a new line. We could only use `_putchar` twice.
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
```

**[2-print_alphabet_x10.c](2-print_alphabet_x10.c)** - This function prints the alphabet 10 times in lowercase, followed by a new line.
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
$ ./2-alphabet_x10 
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
```

**[3-islower.c](3-islower.c)** - This function checks for lowercase characters and returns 1 if it is lowercase and 0 otherwise.
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-islower.c -o 3-islower
$ cat 3-main.c 
#include "dhk.h"

/**
 * main - check the code for DHK School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

$ ./3-islower 
011
```

**[4-isalpha.c](4-isalpha.c)** - This function checks if the character is a letter and returns 1 if it is a lowercase or uppercase letter and 0 otherwise.
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha
$ cat 4-main.c 
#include "dhk.h"

/**
 * main - check the code for DHK School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

$ ./4-isalpha 
1110
```

**[5-sign.c](5-sign.c)** - This function prints the sign of a number. It returns 1 and prints ```+``` if the number is greater than zero, returns 0 and prints ```0``` if the number is zero, and  returns -1 and prints ```-``` if it is negative.
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 5-main.c 5-sign.c -o 5-sign
$ ./5-sign 
+, 1
0, 0
+, 1
-, /
```

**[6-abs.c](6-abs.c)** - This function computes the absolute value of an integer.
```
$ ./6-abs 
1
0
1
98
```

**[7-print_last_digit.c](7-print_last_digit.c)** - This function prints the last digit of a number and returns the value of the last digit.
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 6-main.c 6-abs.c -o 6-abs
$ ./7-last_digit 
8044
```

**[8-24_hours.c](8-24_hours.c)** - This function prints every minute of the day starting from 00:00 to 23:59.
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 8-main.c 8-24_hours.c -o 8-24
$ ./8-24 | head
00:00
00:01
00:02
00:03
00:04
00:05
00:06
00:07
00:08
00:09

$ ./8-24 | tail
23:50
23:51
23:52
23:53
23:54
23:55
23:56
23:57
23:58
23:59
```

**[9-times_table.c](9-times_table.c)** - This function prints a multiplication table for the number 9
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 9-main.c 9-times_table.c -o 9-times_table
$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$

$ ./9-times_table | tr ' ' . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
```

**[10-add.c](10-add.c)** - This function adds two numbers and returns the sum.
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 10-main.c 10-add.c -o 10-add
$ ./10-add 
98
```

**[11-print_to_98.c](11-print_to_98.c)** - This function prints all natural numbers from a number ```n``` to 98 where ```n``` is the starting number. THe numbers are printed in order in a comma separated list. **The standard library was allowed for this particular function**
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 11-main.c 11-print_to_98.c -o 11-98
$ ./11-98 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
98
111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98
81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
```


### Advanced
**[100-times_table.c](100-times_table.c)** - This function prints a multiplication table for any number between 0 and 14 inclusive.
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 100-main.c 100-times_table.c -o 100-times_table
$ ./100-times_table 
0,   0,   0,   0
0,   1,   2,   3
0,   2,   4,   6
0,   3,   6,   9

0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5
0,   2,   4,   6,   8,  10
0,   3,   6,   9,  12,  15
0,   4,   8,  12,  16,  20
0,   5,  10,  15,  20,  25


0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144
```

**[101-natural.c](101-natural.c)** - This function prints the sum of all multiples of 3 and 5 up to 1024.
```
$ gcc -Wall -pedantic -Werror -Wextra 101-natural.c
$ ./a.out
244293
```

**[102-fibonacci.c](102-fibonacci.c)** - This function prints the first 50 Fibonacci numbers starting with ```1``` and ```2``` followed by a new line in a comma separated list.
```
$ gcc -Wall -pedantic -Werror -Wextra 102-fibonacci.c
$ ./a.out
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, 2971215073, 4807526976, 7778742049, 12586269025, 20365011074
```

**[103-fibonacci.c](103-fibonacci.c)** - This function prints the sum of all even Fibonacci numbers whose values do not exceed 4,000,000. The starting point is at 1 and 2.
```
$ gcc -Wall -pedantic -Werror -Wextra 103-fibonacci.c
$ ./a.out
4613732
```

**[104-fibonacci.c](104-fibonacci.c)** - This function prints the first 98 Fibonacci numbers. We are not allowed to use long long, malloc, pointers, arrays, tables, or structures. **NOTE**: My code is not entirely correct


2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [DHK School](https://www.dhkschool.com/)
