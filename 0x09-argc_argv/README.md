# 0x09. C - argc, argv

## Overview
The goal of this project was to learn how arguments are passed to the program, what the two prototypes for main are and when/how to use each one, and how to use the `__attribute__((unused))` or `(void)` commands to compile functions with unused variables.

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
**[0-whatsmyname.c](0-whatsmyname.c)** - The program prints its name followed by a new line
```
$ gcc -Wall -pedantic -Werror -Wextra 0-whatsmyname.c -o mynameis
$ ./mynameis 
./mynameis
$ mv mynameis mynewnameis
$ ./mynewnameis 
./mynewnameis
```

**[1-args.c](1-args.c)** - The program prints the number of arguments passed into it
```
$ gcc -Wall -pedantic -Werror -Wextra 1-args.c -o nargs
$ ./nargs 
0
$ ./nargs hello
1
$ ./nargs "hello, world"
1
$ ./nargs hello, world
2
```

**[2-args.c](2-args.c)** - The program prints all arguments it receives
```
$ gcc -Wall -pedantic -Werror -Wextra 2-args.c -o args
$ ./args 
./args
$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
```

**[3-mul.c](3-mul.c)** - The program multiplies two numbers
```
$ gcc -Wall -pedantic -Werror -Wextra 3-mul.c -o mul
$ ./mul 2 3
6
$ ./mul 2 -3
-6
$ ./mul 2 0
0
$ ./mul 245 3245342
795108790
$ ./mul
Error
```

**[4-add.c](4-add.c)** - The program adds positive numbers
```
$ gcc -Wall -pedantic -Werror -Wextra 4-add.c -o add
$ ./add 1 1
2
$ ./add 1 10 100 1000
1111
$ ./add 1 2 3 e 4 5
Error
$ ./add
0
```

### Advanced
**[100-change.c](100-change.c)** - The program prints the minimum number of coins to make change for some amount of money
```
$ gcc -Wall -pedantic -Werror -Wextra 100-change.c -o change
$ ./change 
Error
$ ./change 10
1
$ ./change 100
4
$ ./change 101
5
$ ./change 13
3
```

2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [Holberton School](https://www.holbertonschool.com/)
