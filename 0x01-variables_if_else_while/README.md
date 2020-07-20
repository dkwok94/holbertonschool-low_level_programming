# 0x01. C - Variables, if, else, while

## Overview
This project focused on teaching conditionals, relational operators, logical operators, arithmetic operators, `if`, `if...else`, variable data types, `while` and `for` loops, the `ASCII` character set, and the `gcc` `-m32` and `-m64` flags.

## Requirements
### C Scripts
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags `-Wall -Werror -Wextra and -pedantic`
* All your files should end with a new line
* Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`

## Tasks
### Mandatory
**[0-positive_or_negative.c](0-positive_or_negative.c)** - This program takes a random number and prints whether the number is positive, negative, or zero followed by a new line.
```
vagrant:0x01-variables_if_else_while$ ./a.out
-183904654 is negative
vagrant:0x01-variables_if_else_while$ ./a.out
906946182 is positive
```

**[1-last_digit.c](1-last_digit.c)** - The program takes a random number and decides whether the number in the ones place (with the sign of the whole number) is greater than 5, zero, or less than 6/not equal to zero. A newline will terminate the program.
```
vagrant:0x01-variables_if_else_while$ ./a.out
Last digit of 520737019 is 9 and is greater than 5
vagrant:0x01-variables_if_else_while$ ./a.out
Last digit of -857003492 is -2 and is less than 6 and not 0
vagrant:0x01-variables_if_else_while$ ./a.out
Last digit of 676370545 is 5 and is less than 6 and not 0
```

**[2-print_alphabet.c](2-print_alphabet.c)** - This program will use the ```putchar``` function to print the alphabet in lower case followed by a new line.
```
vagrant:0x01-variables_if_else_while$ ./a.out
abcdefghijklmnopqrstuvwxyz
```

**[3-print_alphabets.c](3-print_alphabets.c)** - This program will print the alphabet in lower case followed by upper case followed by a new line using the ```putchar``` function.
```
vagrant:0x01-variables_if_else_while$ ./a.out
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
```

**[4-print_alphabt.c](4-print_alphabt.c)** - This program will print the alphabet in lower case except for the letters ```q``` and ```e```. Only the ```putchar``` function will be used and it can only be used twice.
```
vagrant:0x01-variables_if_else_while$ ./a.out
abcdfghijklmnoprstuvwxyz
```

**[5-print_numbers.c](5-print_numbers.c)** - This program will print all single digit numbers in base 10 starting from ```0``` followed by a new line.
```
vagrant:0x01-variables_if_else_while$ ./a.out
0123456789
```

**[6-print_numberz.c](6-print_numberz.c)** - This program will print all single digit numbers of base 10 starting from ```0``` followed by a new line. The catch is that we cannot use a variable of type ```char```. This is basically just saying we can put the ```char``` data into an ```int``` data type.
```
vagrant:0x01-variables_if_else_while$ ./a.out
0123456789
```

**[7-print_tebahpla.c](7-print_tebahpla.c)** - This program will print the lowercase alphabet in reverse followed by a new line. Only the ```putchar``` function will be used and only twice.
```
vagrant:0x01-variables_if_else_while$ ./a.out
zyxwvutsrqponmlkjihgfedcba
```

**[8-print_base16.c](8-print_base16.c)** - This program will print all numbers of base 16 in lowercase followed by a new line using ```putchar``` at most three times.
```
vagrant:0x01-variables_if_else_while$ ./a.out
0123456789abcdef
```

**[9-print_comb.c](9-print_comb.c)** - This program will print all single digit numbers in a comma separated list in ascending order using only the ```putchar``` function at most four times.
```
vagrant:0x01-variables_if_else_while$ ./a.out
0, 1, 2, 3, 4, 5, 6, 7, 8, 9
```
**[10-print_comb2.c](10-print_comb2.c)** - This program will print all digits from ```00``` to ```99```in a comma separated list using the ```putchar``` function at most five times. It will end with a new line.
```
vagrant:0x01-variables_if_else_while$ ./a.out
00, 01, 02, 03, 04, 05, 06, 07, 08, 09, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99
```

### Advanced
**[100-print_comb3.c](100-print_comb3.c)** - This program will print all combinations of two digits in a comma separated list. It will exclude duplicate combinations. Duplicate combinations are things like ```01``` and ```10```. However, they will print only the combination with the lowest value. So ```01``` is printed and not ```10``` in this example.
```
vagrant:0x01-variables_if_else_while$ ./a.out
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
```

**[101-print_comb4.c](101-print_comb4.c)** - This program will print all possible combinations of three digits in a comma separated list. Duplicate combinations will be excluded except for the one with the smallest value. Numbers will be in ascending order and only the ```putchar``` function will be used a maximum of six times. **NOTE: The way I did this the first time was a horrible way of doing it and is worth a rewrite when I have time**
```
vagrant:0x01-variables_if_else_while$ ./a.out
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
```

**[102-print_comb5.c](102-print_comb5.c)** - This program prints all possible combinations of two, two-digit numbers from ```00``` to ```99```. The two numbers will be separated by a space and only unique combinations will be printed (in this case, ```00 01``` and ```01 00``` are the same combination and only ```00 01``` will be printed). The function will use only the ```putchar``` function a maximum of eight times and end with a new line. 
```
vagrant:0x01-variables_if_else_while$ gcc 102-print_comb5.c
vagrant:0x01-variables_if_else_while$ ./a.out
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, 00 12, 00 13, 00 14, 00 15, 00 16, 00 17, 00 18, 00 19, 00 20, 00 21, 00 22, 00 23, 00 24, 00 25, 00 26, 00 27, 00 28, 00 29, 00 30, 00 31, 00 32, 00 33, 00 34, 00 35, 00 36, 00 37, 00 38, 00 39, 00 40, 00 41, 00 42, 00 43, 00 44, 00 45, 00 46, 00 47, 00 48, 00 49, 00 50, 00 51, 00 52, 00 53, 00 54, 00 55, 00 56, 00 57, 00 58, 00 59, 00 60, 00 61, 00 62, 00 63, 00 64, 00 65, 00 66, 00 67, 00 68, 00 69, 00 70, 00 71, 00 72, 00 73
...
90 92, 90 93, 90 94, 90 95, 90 96, 90 97, 90 98, 90 99, 91 92, 91 93, 91 94, 91 95, 91 96, 91 97, 91 98, 91 99, 92 93, 92 94, 92 95, 92 96, 92 97, 92 98, 92 99, 93 94, 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
```

2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [DHK School](https://www.dhkschool.com/)
