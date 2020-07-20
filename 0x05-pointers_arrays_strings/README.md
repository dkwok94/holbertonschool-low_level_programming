# 0x05. C - More pointers, arrays, and strings

## Overview
This was a continuation of 0x04 with more exercises with pointers, arrays, and strings.

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
* The prototypes of all your functions should be included in your header file called `dhk.h`
* All your header files should be include guarded

## Tasks
### Mandatory
**[0-strcat.c](0-strcat.c)** - Function concatenates two strings
```
$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-strcat.c -o 0-strcat
$ ./0-strcat 
Hello 
World!
Hello World!
World!
Hello World!
```

**[1-strncat.c](1-strncat.c)** - Function concatenates n bytes from one string onto another. It will use at most n bytes and need not be null-terminated if it contains n or more bytes
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-strncat.c -o 1-strncat
$ ./1-strncat 
Hello 
World!
Hello W
World!
Hello W
Hello WWorld!
World!
Hello WWorld!
```

**[2-strncpy.c](2-strncpy.c)** - Function copies n bytes from one string onto another and replaces all other positions with null characters if ```n > src```
```
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-strncpy.c -o 2-strncpy
$ ./2-strncpy 
*************************************************************************************************
First********************************************************************************************
First********************************************************************************************
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
```

**[3-strcmp.c](3-strcmp.c)** - Function compares two strings and returns the difference based on whether `s1` is greater than, less than, or equal to `s2`
```
$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-strcmp.c -o 3-strcmp
$ ./3-strcmp 
-15
15
0
```

**[4-rev_array.c](4-rev_array.c)** - Function reverses content of an array of integers
```
$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-rev_array.c -o 4-rev_array
$ ./4-rev_array 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
```

**[5-string_toupper.c](5-string_toupper.c)** - Function turns all characters in a string to uppercase
```
$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-string_toupper.c -o 5-string_toupper
$ ./5-string_toupper 
HOLBERTON SCHOOL!
HOLBERTON SCHOOL!
```

**[6-cap_string.c](6-cap_string.c)** - Function capitalizes all words in a string where words are defined to be groups of characters in between separators like `.`, `,`, `?`, `!`, and others.
```
$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 6-cap_string.c -o 6-cap
$ ./6-cap 
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
```

**[7-leet.c](7-leet.c)** - Function converts a string to 1337. `A`'s are replaced with `4`, `E`'s are replaced with `3`, `O`'s are replaced with `0`, `T`'s are replaced with `7`, and `L`'s are replaced with `1`. Only one if statement and two loops were allowed and `switch` was not allowed.
```
$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 7-leet.c -o 7-1337
$ ./7-1337 
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
```

**[8-rot13.c](8-rot13.c)** - Function converts a string to ROT13 which replaces each letter with the letter that is 13 letters away from it. Only one if statement and two loops were allowed and `switch` was not allowed.
```
$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 8-rot13.c -o 8-rot13
$ ./8-rot13 
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
```

### Advanced
**[100-print_number.c](100-print_number.c)** - Function prints an integer. Long integers, arrays, and pointers were not allowed
```
$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 100-main.c 100-print_number.c -o 100-print_numbers
$ ./100-print_numbers 
98
402
1024
0
-98
```

**[101-magic.c](101-magic.c)** - Function changes value of an array element by accessing memory location


2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [DHK School](https://www.dhkschool.com/)
