# 0x0A. C - malloc, free

## Overview
The goal of this project was to understand the difference between automatic and dynamic memory allocation as well as how to use the commands `malloc` and `free`. `valgrind` is also used to check for memory leaks.

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

## Tasks
### Mandatory
**[0-create_array.c](0-create_array.c)** - Creates an array of chars and initializes it with a specific char
```
$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-create_array.c -o a
$ ./a 
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
```

**[1-strdup.c](1-strdup.c)** - Returns a pointer to a newly allocated space in memory that contains a copy of the string given as a parameter
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-strdup.c -o s
$ ./s 
Holberton
```

**[2-str_concat.c](2-str_concat.c)** - Function concatenates two strings
```
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-str_concat.c -o c
$ ./c | cat -e
Betty Holberton$
```

**[3-alloc_grid.c](3-alloc_grid.c)** - Function returns a pointer to a 2-D array of integers
```
$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-alloc_grid.c -o g
$ ./g
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 

0 0 0 98 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 402 0 
```

**[4-free_grid.c](4-free_grid.c)** - Functions frees a 2 dimensional grid previously created by alloc_grid
```
$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 3-alloc_grid.c 4-free_grid.c -o f
valgrind ./f
==5013== Memcheck, a memory error detector
==5013== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5013== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5013== Command: ./f
==5013== 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 

0 0 0 98 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 402 0 
==5013== 
==5013== HEAP SUMMARY:
==5013==     in use at exit: 0 bytes in 0 blocks
==5013==   total heap usage: 6 allocs, 6 frees, 1,248 bytes allocated
==5013== 
==5013== All heap blocks were freed -- no leaks are possible
==5013== 
==5013== For counts of detected and suppressed errors, rerun with: -v
==5013== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

**[5-argstostr.c](5-argstostr.c)** - Function concatenates all arguments of the program
```
$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-argstostr.c -o args
$ ./args I will "show you" how great I am
./args
I
will
show you
how
great
I
am
```

### Advanced
**[100-strtow.c](100-strtow.c)** - Function splits a string into words
```
$ gcc -Wall -pedantic -Werror -Wextra 100-main.c 100-strtow.c -o strtow
$ ./strtow | cat -e
Holberton$
School$
#cisfun$
```

2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [Holberton School](https://www.holbertonschool.com/)
