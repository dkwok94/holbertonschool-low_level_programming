# 0x04. C - Pointers, arrays, and strings

## Overview
The objective of this project was to introduce us to pointers, arrays, the differences between them, and also how to use strings and manipulate them (ie. array of characters).

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
**[0-reset_to_98.c](0-reset_to_98.c)** - Function updates an integer value to 98 using pointers
```
$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-reset_to_98.c -o 0-98
$ ./0-98 
n=402
n=98
```

**[1-swap.c](1-swap.c)** - Function swaps two numbers
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-swap.c -o 1-swap
$ ./1-swap 
a=98, b=42
a=42, b=98
```

**[2-strlen.c](2-strlen.c)** - Function returns the length of a string
```
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-strlen.c -o 2-strlen
$ ./2-strlen 
10
```

**[3-puts.c](3-puts.c)** - Function prints a string to stdout
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-puts.c -o 3-puts
$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
```

**[4-print_rev.c](4-print_rev.c)** - Function prints a string in reverse
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
```

**[5-rev_string.c](5-rev_string.c)** - Function reverses a string at the memory address
```
$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-rev_string.c -o 5-rev_string
$ ./5-rev_string 
DHK
notrebloH
```

**[6-puts2.c](6-puts2.c)** - Function prints one char out of every 2 of a string
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 6-main.c 6-puts2.c -o 6-puts2
$ ./6-puts2 
02468
```

**[7-puts_half.c](7-puts_half.c)** - Function prints the latter half of a string. It should print the last n characters if the number of characters is odd where n = (length_of_the_string - 1) / 2.
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
$ ./7-puts_half 
56789
```

**[8-print_array.c](8-print_array.c)** - Function prints n elements of an array
```
$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 8-print_array.c -o 8-print_array
$ ./8-print_array 
98, 402, -198, 298, -1024
```

**[9-strcpy.c](9-strcpy.c)** - Copies a string from `src` to a buffer pointed to by `dest`
```
$ gcc -Wall -pedantic -Werror -Wextra 9-main.c 9-strcpy.c -o 9-strcpy
$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
```

**[100-atoi.c](100-atoi.c)** - Function converts a string to an integer. This function should work for int_max and int_min. Additionally, if there are no numbers, return 0. All the `+` and `-` signs must be taken into account. The `long` data type is not allowed. No hard-coding special values and array variable types cannot be declared.
```
$ gcc -Wall -pedantic -Werror -Wextra -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
$ ./100-atoi 
98
-402
-98
214748364
0
402
98
402
```


2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [DHK School](https://www.dhkschool.com/)
