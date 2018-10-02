# 0x16. C - Doubly linked lists

## Overview
The goal of this project was to learn what a doubly linked list is, how to use a doubly linked list, and how to create a doubly linked list.

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
* The prototypes of all your functions should be included in your header file called `lists.h`
* All your header files should be include guarded
* The data structure for this project was:
```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Tasks
### Mandatory
**[0-print_dlistint.c](0-print_dlistint.c)** - Function prints all elements of a `dlistint_t` list
```
$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_dlistint.c -o a
$ ./a 
9
8
-> 2 elements
```

**[1-dlistint_len.c](1-dlistint_len.c)** - Function returns the number of elements in a `dlistint_t` list
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-dlistint_len.c -o b
$ ./b 
-> 2 elements
```

**[2-add_dnodeint.c](2-add_dnodeint.c)** - Function adds a new node at the beginning of a `dlistint_t` list
```
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
$ ./c 
1024
402
98
4
3
2
1
0
```

**[3-add_dnodeint_end.c](3-add_dnodeint_end.c)** - Function adds a new node at the end of a `dlistint_t` list
```
$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
$ ./d 
0
1
2
3
4
98
402
1024
```

**[4-free_dlistint.c](4-free_dlistint.c)** - Function frees a `dlistint_t` list
```
$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
$ valgrind ./e 
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197== 
0
1
2
3
4
98
402
1024
==4197== 
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197== 
==4197== All heap blocks were freed -- no leaks are possible
==4197== 
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

**[5-get_dnodeint.c](5-get_dnodeint.c)** - Function returns the nth node of a `dlistint_t` list
```
$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h
$ ./h
0
1
2
3
4
98
402
1024
98
```

**[6-sum_dlistint.c](6-sum_dlistint.c)** - Function returns the sum of all the data (n) of a `dlistint_t` list
```
$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i
$ ./i 
sum = 1534
```

**[7-insert_dnodeint.c](7-insert_dnodeint.c)** - Function inserts a new node at a given position
```
$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j
$ ./j 
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
```

**[8-delete_dnodeint.c](8-delete_dnodeint.c)** - Function deletes the node at index `index` of a `dlistint_t` list
```
$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k
$ ./k
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
```



2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [Holberton School](https://www.holbertonschool.com/)
