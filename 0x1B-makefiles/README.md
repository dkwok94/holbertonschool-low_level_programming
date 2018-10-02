# 0x1B. C - Makefiles

## Overview
The goal of this project was to learn what `make` files were, when, why, and how to use Makefiles, what are the rules and how to set and use them, what are explicit and implicit rules, the most common rules, and variables and how to set and use them.

## Requirements
* Allowed editors: `vi`, `vim`, `emacs`
* OS: Ubuntu 14.04 LTS
* Version of `gcc`: 4.8.4
* Version of `make`: GNU Make 3.81
* All files should end with a new line
* The [following files](https://github.com/holbertonschool/0x1B.c) are used for these tasks. 

## Tasks
### Mandatory
**[0-Makefile](0-Makefile)** - The name of executable must be `holberton`, there are no variables, and the `all` rule builds the executable
```
$ make -f 0-Makefile 
gcc main.c holberton.c -o holberton
$ ./holberton 
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
```

**[1-Makefile](1-Makefile)** - The name of the executable must be `holberton`, the `all` rules builds the executable, and the variables `CC` and `SRC` will be used where the first is the compiler being used and the second is the `.c` files
```
$ make -f 1-Makefile
gcc main.c holberton.c -o holberton
$ make -f 1-Makefile
gcc main.c holberton.c -o holberton
```

**[2-Makefile](2-Makefile)** - The name of the executable must be `holberton`, the `all` rule builds the executable, and the following variables will be used:

`CC`: the compiler being used  
`SRC`: the `.c` files  
`OBJ`: the `.o` files  
`NAME`: the name of the executable  
```
$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc    -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
$ make -f 2-Makefile
gcc main.o holberton.o -o holberton
$ echo "/* Holberton */" >> main.c
$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc main.o holberton.o -o holberton
```

**[3-Makefile](3-Makefile)** - The name of the executable must be `holberton`, and `all` rule builds the executable, the `clean` rule deletes all emacs and vim temporary files along with the executable, the `oclean` deletes all the object files, the `fclean` deletes the emacs temporary files, the executable, and the object files, and `re` forces recompilation of all source files. The variables:

`CC`: the compiler  
`SRC`: the `.c` files  
`OBJ`: the `.o` files  
`NAME`: the name of the executable  
`RM`: the program to delete files  
```
$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
holberton.c
main.c
main.c~
m.h
$ make -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
$ make all -f 3-Makefile
gcc main.o holberton.o -o holberton
$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
holberton
holberton.c
holberton.o
main.c
main.c~
main.o
m.h
$ make clean -f 3-Makefile 
rm -f *~ holberton
$ make oclean -f 3-Makefile 
rm -f main.o holberton.o
$ make fclean -f 3-Makefile 
rm -f *~ holberton
$ make all -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
$ make all -f 3-Makefile
gcc main.o holberton.o -o holberton
$ make re -f 3-Makefile
rm -f main.o holberton.o
gcc    -c -o main.o main.c
gcc    -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
```

**[4-Makefile](4-Makefile)** - The name of the executable must be `holberton`, the `all` rule builds the executable, the `clean` rule deletes all emacs and vim temporary files and the executable, the `oclean` rule deletes the object files, the `fclean` rule deletes the emacs temporary files, the executable, and the object files, and `re` forces recompilation of all source files. The following variables are used:

`CC`: the compiler to be used  
`SRC`: the `.c` files  
`OBJ`: the `.o` files  
`NAME`: the name of the executable  
`RM`: the program to delete files  
`CFLAGS`: the compiler flags `Wall Werror Wextra pedantic`  
```
$ make all -f 4-Makefile
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
```

**[5-island_perimeter.py](5-island_perimeter.py)** - Creates a function that returns the perimeter of the island described in a grid. 
* The grid is a list of integers where 0 represents a water zone
* 1 represents a land zone
* one cell is a square with side length 1
* grid cells are connected horizontally and vertically
* and the grid's height and width are not to exceed 100
```
#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))

$ ./5-main.py
12
```

### Advanced
**[100-Makefile](100-Makefile)** - Same rules as [4-Makefile](4-Makefile) except for:
* `$(RM)` can be used for cleaning up, but we are not allowed to set the `RM` variable
* Cannot use `$(CC)` more than once
* Can only use `$(RM)` twice
* Cannot use `$(CFLAGS)`
* Cannot use `$(OBJ)`
* Cannot use `%.o: %.c` rules
* Should not compile if `m.h` header file is missing


2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [Holberton School](https://www.holbertonschool.com/)
