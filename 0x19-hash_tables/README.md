# 0x19. C - Hash Tables

## Overview
This is a project on hash tables, hash functions, collisions, and other topics related to the hash table data structure. Programs will be written in C

## Requirements
### Python Scripts
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be interpreted/compiled on Ubuntu 14.04 LTS using `python3` (version 3.4.3)
* All your files should end with a new line
* The first line of all your files should be exactly `#!/usr/bin/python3`
* A `README.md` file, at the root of the folder of the project, is mandatory
* Your code should use the PEP 8 style (version 1.7.*)
* All your files must be executable
* The length of your files will be tested using `wc`

### Shell Scripts
* Allowed editors: `vi`, `vim`, `emacs`
* All your scripts will be tested on Ubuntu 14.04 LTS
* All your scripts should be exactly two lines long (`wc -l` file should print 2)
* All your files should end with a new line
* The first line of all your files should be exactly `#!/bin/bash`
* All your files must be executable

### C Scripts
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags `-Wall -Werror -Wextra and -pedantic`
* All your files should end with a new line
* Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called `hash_tables.h`
* All your header files should be include guarded

## Tasks
### Mandatory
**[0-hash_table_create.c](0-hash_table_create.c)** - Creates a has table and returns a pointer to the newly created hash table. The function returns NULL if something went wrong.

**[1-djb2.c](1-djb2.c)** - Write a hash function implementing the djb2 algorithm. We can copy and paste the function from [here](https://intranet.hbtn.io/rltoken/ZBHQ6JQMB8OAyxuSPirqxQ)

**[2-key_index.c](2-key_index.c)** - Gives the index of a key. It uses the `hash_djb2` function written earlier and returns the index at which the key/value pair should be stored in the array of the hash table.

**[3-hash_table_set.c](3-hash_table_set.c)** - Adds an element to the hash table - if there is a collision, it adds a new node at the beginning of the list. Otherwise, it returns 1 upon success and 0 otherwise.

**[4-hash_table_get.c](4-hash_table_get.c)** - Function retrieves the value associated with a key and returns it, or NULL if the key is not found.

**[5-hash_table_print.c](5-hash_table_print.c)** - Function prints the hash table and prints the key/balue pair in the order they appear in the array. If the hash table does not exist, print nothing.

**[6-hash_table_delete.c](6-hash_table_delete.c)** - Function deletes the hash table

### Advanced

