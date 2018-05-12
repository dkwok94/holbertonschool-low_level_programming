# 0x00. C - Hello, World

## Overview
This project is the first C project at Holberton School. It deals with the `main` function, `printf`, `puts`, `putchar`, compilation using `gcc`, and some general history of the C programming language.

## Requirements
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

## Tasks
### Mandatory
**[0-preprocessor](0-preprocessor)** - This script will run a C file through the preprocessor and save the result to another file. The C file name will be saved in a variable called ```$CFILE``` and the output will be saved in the file ```c```.

**[1-compiler](1-compiler)** - This script will compile a C file without the linking step. The C file name will be saved in the variable ```$CFILE``` and the output file will have the extension ```.o```.

**[2-assembler](2-assembler)** - This script will generate assembly code of a C code and save its output into a file. The C file name will be saved in a variable called ```$CFILE``` and the output will have an extension ```.s```.
```
vagrant:0x00-hello_world$ ./2-assembler
vagrant:0x00-hello_world$ cat main.s
        .file   "main.c"
        .text
        .globl  main
        .type   main, @function
main:
.LFB0:
        .cfi_startproc
        pushq   %rbp
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        movq    %rsp, %rbp
        .cfi_def_cfa_register 6
        movl    $0, %eax
        popq    %rbp
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc
.LFE0:
        .size   main, .-main
        .ident  "GCC: (Ubuntu 5.4.1-2ubuntu1~14.04) 5.4.1 20160904"
        .section        .note.GNU-stack,"",@progbits
```

**[3-name](3-name)** - This script will compile a C file and create an executable file called ```cisfun```. The C file name will be stored in a variable called ```$CFILE```
```
vagrant:0x00-hello_world$ ./3-name
vagrant:0x00-hello_world$ ./cisfun
```

**[4-puts.c](4-puts.c)** - This program will print exactly `"Programming is like building a multilingual puzzle` followed by a new line. It can only use the function ```puts``` and must end with a return value of ```0```.
```
vagrant:0x00-hello_world$ ./4-puts
Programming is like building a multilingual puzzle
```

**[5-printf.c](5-printf.c)** - This program will print exactly *with proper grammar, but the outcome is a piece of art* followed by a newline. It can only use the function ```printf``` and must return ```0```. Additionally, it must compile without warning when using ```-Wall``` in ```gcc```.
```
vagrant:0x00-hello_world$ ./5-printf
with proper grammar, but the outcome is a piece of art,
```

**[6-size.c](6-size.c)** - This program prints the size of various types on the computer it is compiled and run on. The program should return ```0``` after it is run.
```
vagrant:0x00-hello_world$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
vagrant:0x00-hello_world$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
```

### Advanced
**[100-intel](100-intel)** - This script generates assembly code from a C source file and saves it in an output file in Intel Syntax. The C file name will be saved in a variable ```$CFILE``` and the output should have extension ```.s```.
```
vagrant:0x00-hello_world$ ./100-intel
vagrant:0x00-hello_world$ cat main.s
        .file   "main.c"
        .intel_syntax noprefix
        .text
        .globl  main
        .type   main, @function
main:
.LFB0:
        .cfi_startproc
        push    rbp
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        mov     rbp, rsp
        .cfi_def_cfa_register 6
        mov     eax, 0
        pop     rbp
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc
.LFE0:
        .size   main, .-main
        .ident  "GCC: (Ubuntu 5.4.1-2ubuntu1~14.04) 5.4.1 20160904"
        .section        .note.GNU-stack,"",@progbits
```

**[101-quote.c](101-quote.c)** - This program will print `and that piece of art is useful" - Dora Korpar, 2015-10-19` followed by a new line to the standard error. The program should also return ```1```.
```
vagrant:0x00-hello_world$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
```

2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [Holberton School](https://www.holbertonschool.com/)
