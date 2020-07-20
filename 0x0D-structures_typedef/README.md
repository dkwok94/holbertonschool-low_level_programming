# 0x0D. C - Structures, typedef

## Overview
The goal of ths project was to learn what structures are and when, how, and why they are used. The command `typedef` was learned as well.

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
* The prototypes of all your functions should be included in your header file called `dog.h`
* All your header files should be include guarded

## Tasks
### Mandatory
**[dog.h](dog.h)** - Header file that defines a struct dog structure and typedefs it
```
$ make
gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a
$ ./a 
My name is Django, and I am 3.5 :) - Woof!
```

**[1-init_dog.c](1-init_dog.c)** - Initializes a variable of type struct dog
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-init_dog.c -o b
$ ./b 
My name is Django, and I am 3.5 :) - Woof!
```

**[2-print_dog.c](2-print_dog.c)** - Prints a struct dog
```
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_dog.c -o c
$ ./c 
Name: Django
Age: 3.500000
Owner: Jay
```

**[4-new_dog.c](4-new_dog.c)** - Creates a new dog
```
$ gcc -Wall -pedantic -Werror -Wextra 3-main.c -o d
$ ./d 
My name is Django, and I am 3.5 :) - Woof!
```

**[5-free_dog.c](5-free_dog.c)** - Frees a dog structure
```
$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-new_dog.c -o e
$ ./e
My name is Django, and I am 3.5 :) - Woof!
```

2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [DHK School](https://www.dhkschool.com/)
