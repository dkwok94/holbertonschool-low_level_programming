# 0x03. C - More functions, more nested loops

## Overview
This project was a continuation of 0x02 with more exercises in basic algorithms, loops, functions, and variables.

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
**[0-isupper.c](0-isupper.c)** - Function checks for uppercase character and returns 1 if uppercase and 0 otherwise
```
$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-isupper.c -o 0-isuper
$ ./0-isuper 
A: 1
a: 0
```

**[1-isdigit.c](1-isdigit.c)** - Function checks for digits and returns 1 if a digit and 0 otherwise
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-isdigit.c -o 1-isdigit
$ ./1-isdigit 
0: 1
a: 0
```

**[2-mul.c](2-mul.c)** - Function multiplies two integers
```
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-mul.c -o 2-mul
$ ./2-mul 
100352
-1646592
```

**[3-print_numbers.c](3-print_numbers.c)** - Function prints the numbers from 0 to 9 followed by a new line
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
$ ./3-print_numbers | cat -e
0123456789$
```

**[4-print_most_numbers.c](4-print_most_numbers.c)** - Function prints the numbers from 0 to 9 except 2 and 4
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
$ ./4-print_most_numbers 
01356789
```

**[5-more_numbers.c](5-more_numbers.c)** - Function prints the numbers from 0 to 14 a total of 10 times
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
$ ./5-more_numbers 
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
```

**[6-print_line.c](6-print_line.c)** - Function draws straight lines in the terminal
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 6-main.c 6-print_line.c -o 6-lines
$ ./6-lines | cat -e
$
__$
__________$
$
```

**[7-print_diagonal.c](7-print_diagonal.c)** - Function draws a diagonal line on the terminal
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
$  ./7-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
```

**[8-print_square.c](8-print_square.c)** - Function prints a square on the terminal
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 8-main.c 8-print_square.c -o 8-squares
$ ./8-squares 
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########
```

**[9-fizz_buzz.c](9-fizz_buzz.c)** - Function prints numbers from 1 to 100. All numbers that are multiples of 3 only are replaced with Fizz, all that are multiple of 5 only are replaced with Buzz, and all that are multiples of 3 and 5 are replaced with FizzBuzz
```
$ gcc -Wall -pedantic -Werror -Wextra 9-fizz_buzz.c -o 9-fizz_buzz
$ ./9-fizz_buzz 
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
```

**[10-print_triangle.c](10-print_triangle.c)** - Function prints a triangle on the terminal
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
$ ./10-triangles 
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#
$ ./10-triangles | tr ' ' . | cat -e
.#$
##$
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$
#$
$
```

### Advanced
**[100-prime_factor.c](100-prime_factor.c)** - Function prints the largest prime factor of the number 612852475143
```
$ gcc -Wall -pedantic -Wextra -Werror 100-prime_factor.c
$ ./a.out
50829599
```

**[101-print_number.c](101-print_number.c)** - Function prints any integer
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
$ ./101-print_numbers 
98
402
1024
0
-98
```


2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [DHK School](https://www.dhkschool.com/)
