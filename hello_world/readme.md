# Tasks

## 0. Preprocessor
**Mandatory**

Write a script that runs a C file through the preprocessor and saves the result into another file.

- The C file name will be saved in the variable `$CFILE`
- The output should be saved in the file `c`

Example:
```sh
julien@ubuntu:~/c/$ export CFILE=main.c
julien@ubuntu:~/c/$ ./0-preprocessor 
julien@ubuntu:~/c/$ tail c
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `hello_world`
- File: `0-preprocessor`

## 1. Compiler
**Mandatory**

Write a script that compiles a C file but does not link.

- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.o` instead of `.c`

Example:
```sh
julien@ubuntu:~/c/$ export CFILE=main.c
julien@ubuntu:~/c/$ ./1-compiler 
julien@ubuntu:~/c/$ ls
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `hello_world`
- File: `1-compiler`

## 2. Assembler
**Mandatory**

Write a script that generates the assembly code of a C code and saves it in an output file.

- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`

Example:
```sh
julien@ubuntu:~/c/$ export CFILE=main.c
julien@ubuntu:~/c/$ ./2-assembler
julien@ubuntu:~/c/$ ls
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `hello_world`
- File: `2-assembler`

## 3. Name
**Mandatory**

Write a script that compiles a C file and creates an executable named `cisfun`.

- The C file name will be saved in the variable `$CFILE`

Example:
```sh
julien@ubuntu:~/c/$ export CFILE=main.c
julien@ubuntu:~/c/$ ./3-name 
julien@ubuntu:~/c/$ ls
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `hello_world`
- File: `3-name`

## 4. Hello, puts
**Mandatory**

Write a C program that prints exactly `"Programming is like building a multilingual puzzle"`, followed by a new line.

- Use the function `puts`
- You are not allowed to use `printf`
- Your program should end with the value `0`

Example:
```sh
julien@ubuntu:~/c/$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `hello_world`
- File: `4-puts.c`

## 5. Hello, printf
**Mandatory**

Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.

- Use the function `printf`
- You are not allowed to use the function `puts`
- Your program should return `0`
- Your program should compile without warning when using the `-Wall` gcc option

Example:
```sh
julien@ubuntu:~/c/$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
julien@ubuntu:~/c/$ ./a.out 
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `hello_world`
- File: `5-printf.c`

## 6. Size is not grandeur, and territory does not make a nation
**Mandatory**

Write a C program that prints the size of various types on the computer it is compiled and run on.

- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return `0`
- If you are using a Linux on Vagrant you might have to install the package `libc6-dev-i386` to test the `-m32` gcc option (normally you don't need to do anything on your sandbox).

Example:
```sh
julien@ubuntu:~/c/$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/$ gcc 6-size.c -m64 -o size64 2> /tmp/64
julien@ubuntu:~/c/$ ./size32
julien@ubuntu:~/c/$ ./size64
```

**Repo:**
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `hello_world`
- File: `6-size.c`