# 0x13. C - Bit manipulation

## Overview
The goal of this project was to learn how to manipulate bits and use bitwise operators

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
**[0-binary_to_uint.c](0-binary_to_uint.c)** - Function converts a binary number to an unsinged int
```
$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-binary_to_uint.c -o a
$ ./a 
1
5
0
98
402
```

**[1-print_binary.c](1-print_binary.c)** - Function prints the binary representation of a number
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-print_binary.c _putchar.c -o b
$ ./b 
0
1
1100010
10000000000
10000000001
```

**[2-get_bit.c](2-get_bit.c)** - Function returns the value of a bit at a given index
```
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-get_bit.c -o c
$ ./c
1
1
0
```

**[3-set_bit.c](3-set_bit.c)** - Function sets the value of a bit to 1 at a given index
```
$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-set_bit.c -o d
$ ./d
1056
1024
99
```

**[4-clear_bit.c](4-clear_bit.c)** - Function sets the value of a bit to 0 at a given index
```
$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-clear_bit.c -o e
$ ./e
0
0
96
```

**[5-flip_bits.c](5-flip_bits.c)** - Function returns the number of bits needed to flip to get from one number to another
```
$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-flip_bits.c -o f
$ ./f
2
5
3
1
```


2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [DHK School](https://www.dhkschool.com/)
