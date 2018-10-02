# 0x0C. C - Preprocessor

## Overview
The goal of this project was to understand what macros were and how to use them. The common predefined macros were also learned as well as include guarding header files.

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
**[0-object_like_macro.h](0-object_like_macro.h)** - Header file that defines a macro called SIZE that is an abbreviation of 1024
```
$ make
gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a
$ ./a 
1122
```

**[1-pi.h](1-pi.h)** - Header file that defines a macro called PI and sets it to 3.14159265359
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c -o b
$ ./b
30171.855
```

**[2-main.c](2-main.c)** - Prints the name of the file it is compiled from followed by a new line
```
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c -o c
$ ./c 
2-main.c
$ cp 2-main.c 02-main.c
$ gcc -Wall -pedantic -Werror -Wextra 02-main.c -o cc
$ ./cc
02-main.c
```

**[3-function_like_macro.h](3-function_like_macro.h)** - Header file that defines a macro ABS(x) that computes the absolute value of x
```
$ gcc -Wall -pedantic -Werror -Wextra 3-main.c -o d
$ ./d 
980, 980
```

**[4-sum.h](4-sum.h)** - Header file that defines a macro SUM(x, y) that computes the sum of x and y
```
$ gcc -Wall -pedantic -Werror -Wextra 4-main.c -o e
$ ./e 
1122
```

2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [Holberton School](https://www.holbertonschool.com/)
