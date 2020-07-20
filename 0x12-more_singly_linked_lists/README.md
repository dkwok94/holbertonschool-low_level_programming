# 0x12. C - more singly linked lists

## Overview
The goal of this project was to do more practice using singly linked list data structures.

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
* The prototypes of all your functions should be included in your header file called `lists.h`
* All your header files should be include guarded
* The data structure for this project was:
```
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for DHK project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## Tasks
### Mandatory
**[0-print_listint.c](0-print_listint.c)** - Function prints all elements of a `listint_t` list and returns the number of nodes
```
$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_listint.c -o a
$ ./a 
9
8
-> 2 elements
```

**[1-listint_len.c](1-listint_len.c)** - Function returns the number of elements in a linked `listint_t` list
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-listint_len.c -o b
$ ./b 
-> 2 elements
```

**[2-add_nodeint.c](2-add_nodeint.c)** - Function adds a new node at the beginning of a `listint_t` list
```
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add_nodeint.c 0-print_listint.c -o c
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

**[3-add_nodeint_end.c](3-add_nodeint_end.c)** - Function that adds a new node at the end of a `listint_t` list
```
$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d
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

**[4-free_listint.c](4-free_listint.c)** - Function frees a `listint_t` list
```
$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e
$ valgrind ./e 
==3643== Memcheck, a memory error detector
==3643== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3643== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3643== Command: ./e
==3643== 
0
1
2
3
4
98
402
1024
==3643== 
==3643== HEAP SUMMARY:
==3643==     in use at exit: 0 bytes in 0 blocks
==3643==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3643== 
==3643== All heap blocks were freed -- no leaks are possible
==3643== 
==3643== For counts of detected and suppressed errors, rerun with: -v
==3643== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

**[5-free_listint2.c](5-free_listint2.c)** - Function that frees a `listint_t` list and sets the head to NULL
```
$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o f
$ valgrind ./f 
==3843== Memcheck, a memory error detector
==3843== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3843== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3843== Command: ./f
==3843== 
0
1
2
3
4
98
402
1024
(nil)
==3843== 
==3843== HEAP SUMMARY:
==3843==     in use at exit: 0 bytes in 0 blocks
==3843==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3843== 
==3843== All heap blocks were freed -- no leaks are possible
==3843== 
==3843== For counts of detected and suppressed errors, rerun with: -v
==3843== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

**[6-pop_listint.c](6-pop_listint.c)** - Function deletes the head node of a `listint_t` linked list and returns the head node's data
```
$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c -o g
$ valgrind ./g 
==4369== Memcheck, a memory error detector
==4369== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4369== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4369== Command: ./g
==4369== 
0
1
2
3
4
98
402
1024
- 0
1
2
3
4
98
402
1024
- 1
2
3
4
98
402
1024
(nil)
==4369== 
==4369== HEAP SUMMARY:
==4369==     in use at exit: 0 bytes in 0 blocks
==4369==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==4369== 
==4369== All heap blocks were freed -- no leaks are possible
==4369== 
==4369== For counts of detected and suppressed errors, rerun with: -v
==4369== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

**[7-get_nodeint.c](7-get_nodeint.c)** - Function returns the nth node of a `listint_t` linked list where the index starts at 0
```
$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c -o h
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
0
1
2
3
4
98
402
1024
```

**[8-sum_listint.c](8-sum_listint.c)** - Function returns the sum of all the data (n) of a `listint_t` linked list
```
$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 3-add_nodeint_end.c 5-free_listint2.c 8-sum_listint.c -o i
$ ./i 
sum = 1534
```

**[9-insert_nodeint.c](9-insert_nodeint.c)** - Function inserts a new node at a given position
```
$ gcc -Wall -pedantic -Werror -Wextra 9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c -o j
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

**[10-delete_nodeint.c](10-delete_nodeint.c)** - Function deletes the node at a specified index of a `listint_t` list
```
$ gcc -Wall -pedantic -Werror -Wextra 10-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 10-delete_nodeint.c -o k
$ valgrind ./k 
==5571== Memcheck, a memory error detector
==5571== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5571== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5571== Command: ./k
==5571== 
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
==5571== 
==5571== HEAP SUMMARY:
==5571==     in use at exit: 0 bytes in 0 blocks
==5571==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==5571== 
==5571== All heap blocks were freed -- no leaks are possible
==5571== 
==5571== For counts of detected and suppressed errors, rerun with: -v
==5571== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```


### Advanced
**[100-reverse_listint.c](100-reverse_listint.c)** - Function reverses a `listint_t` linked list
```
$ gcc -Wall -pedantic -Werror -Wextra 100-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 100-reverse_listint.c -o l
$ valgrind ./l 
==3117== Memcheck, a memory error detector
==3117== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3117== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3117== Command: ./l
==3117== 
0
1
2
3
4
98
402
1024
1024
402
98
4
3
2
1
0
==3117== 
==3117== HEAP SUMMARY:
==3117==     in use at exit: 0 bytes in 0 blocks
==3117==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3117== 
==3117== All heap blocks were freed -- no leaks are possible
==3117== 
==3117== For counts of detected and suppressed errors, rerun with: -v
==3117== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```


2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [DHK School](https://www.dhkschool.com/)
