# 0x1D. C - Search Algorithms

## Overview
This project got us familiar with search algorithms for sorted arrays of integers, primarily focusing on linear search and binary search

## Requirements
### C Scripts
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags `-Wall -Werror -Wextra and -pedantic`
* All your files should end with a new line
* Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
* You are not allowed to use global variables
* No more than 5 functions per file
* Can only use `printf` from the standard library
* The prototypes of all your functions should be included in your header file called `search_algos.h`
* All your header files should be include guarded

## Tasks
### Mandatory
**[0-linear.c](0-linear.c)** - searches an array of sorted integers using linear search
```
$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-linear.c -o 0-linear
$ ./0-linear 
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
```

**[1-binary.c](1-binary.c)** - searches an array of sorted integers using binary search
```
$ gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-binary.c -o 1-binary
$ ./1-binary 
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
```

**[2-O](2-O)** - the worst case time complexity of a linear search in an array of size n

**[3-O](3-O)** - worst case space complexity of an iterative linear search algorithm in an array of size n

**[4-O](4-O)** - the worst case time complexity of a binary search in an array of size n

**[5-O](5-O)** - the worst case space complexity of a binary search in an array of size n

**[6-O](6-O)** - the space complexity of the following algorithm
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

### Advanced
**[100-jump.c](100-jump.c)** - searches an array of sorted integers using jump search
```
$ gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-jump.c -lm -o 100-jump
$ ./100-jump
Value checked array[0] = [0]
Value checked array[3] = [3]
Value found between indexes [3] and [6]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [5]
Value checked array[6] = [6]
Found 6 at index: 6

Value checked array[0] = [0]
Value found between indexes [0] and [3]
Value checked array[0] = [0]
Value checked array[1] = [1]
Found 1 at index: 1

Value checked array[0] = [0]
Value checked array[3] = [3]
Value checked array[6] = [6]
Value checked array[9] = [9]
Value found between indexes [9] and [12]
Value checked array[9] = [9]
Found 999 at index: -1
```

**[101-O](101-O)** - the average case time complexity of jump search in an array of size n using `step = sqrt(n)`

**[102-interpolation.c](102-interpolation.c)** - searches an array of sorted integers using interpolation search
```
$ gcc -Wall -Wextra -Werror -pedantic 102-main.c 102-interpolation.c -o 102-interpolation
$ ./102-interpolation
Value checked array[6] = [2]
Value checked array[7] = [3]
Found 3 at index: 7

Value checked array[14] = [7]
Found 7 at index: 14

Value checked array[2109] is out of range
Found 999 at index: -1
```

**[107-O](107-O)** - the average case time complexity of jump search in a singly linked list of size n using `step = sqrt(n)`

**[108-O](108-O)** - the average case time complexity of jump search in a skip list of size n with an express lane using `step = sqrt(n)`

2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [DHK School](https://www.holbertonschool.com/)
