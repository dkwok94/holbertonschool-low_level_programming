# 0x14. C - File I/O

## Overview
The goal of this project was to learn how to open, create, close, read, and write to files using file descriptors. Additionally, learning how to use the 3 standard file descriptors and their `POSIX` names, the I/O system called `open`, `close`, `read`, and `write`, how to use `O_RDONLY`, `O_WRONLY`, and `O_RDWR`, how to set file permissions using `open`, what a system call is, and the difference between a function and a system call.

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
**[0-read_textfile.c](0-read_textfile.c)** - Function reads a text file and prints it to the `POSIX` standard output. It returns the number of letters it can read and print.
```
$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-read_textfile.c -o a
$ ./a Requiescat 
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.
(printed chars: 114)
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.

(printed chars: 468)
```

**[1-create_file.c](1-create_file.c)** - Function creates a file with `rw-------` permissions and returns 1 on success or -1 on failure. If the file exists, truncate it
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-create_file.c -o b
$ ./b hello world
-> 1)
$ ls -l hello
-rw------- 1 julien julien 5 Dec  3 14:28 hello
```

**[2-append_text_to_file.c](2-append_text_to_file.c)** - Function appends text at the end of a file and returns 1 on success and -1 on failure. If the text content is NULL, do not add anything.
```
$ echo -n Hello > hello
$ ls -l hello
-rw-rw-r-- 1 julien julien 5 Dec  3 14:48 hello
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-append_text_to_file.c -o c
$ ./c hello " World!
> "
-> 1)
$ cat hello 
Hello World!
```

**[3-cp.c](3-cp.c)** - Copies the content of a file to another file. The usage is `cp file_from file_to`. Exit with code 97 if the number of arguments is not correct. Exit with code 98 if the `file_from` does not exist or if it can't be read. Exit with code 99 if `file_to` write fails. Exit with code 100 if the file descriptor can't be closed. All error message will be written on `POSIX` standard error. The permission of the new file should be `rw-rw-r--` and if the file already exists, truncate it, but do not change its permissions. Read 1024 bytes at a time from the `file_from`.
```
$ gcc -Wall -pedantic -Werror -Wextra 3-cp.c -o cp
$ cat incitatous 
Why you should think twice before putting pictures on social media.
(What you always wanted to know about @Incitatous)
#PrivacyAware
http://imgur.com/a/Mq1tc
$ ./cp incitatous Incitatous
$ ls -l Incitatous 
-rw-rw-r-- 1 julien julien 158 Dec  3 15:39 Incitatous
$ cat Incitatous 
Why you should think twice before putting pictures on social media.
(What you always wanted to know about @Incitatous)
#PrivacyAware
http://imgur.com/a/Mq1tc
```


2018 - All programs written by Derek Kwok ([@dlangshk](https://twitter.com/dlangshk)) at [Holberton School](https://www.holbertonschool.com/)
