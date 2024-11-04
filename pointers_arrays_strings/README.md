## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables


## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file


### More Info
- You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, `malloc` and `free` - yet.


## Tasks Part 1

1. **98 Battery st.**: Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
2. **Don't swap horses in crossing a stream**: Write a function that swaps the values of two integers.
3. **This report, by its very length, defends itself against the risk of being read**: Write a function that returns the length of a string.
4. **I do not fear computers. I fear the lack of them**: Write a function that prints a string, followed by a new line, to stdout.
5. **I can only go one way. I've not got a reverse gear**: Write a function that prints a string, in reverse, followed by a new line.
6. **A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes**: Write a function that reverses a string.
7. **Half the lies they tell about me aren't true**: Write a function that prints every other character of a string, starting with the first character, followed by a new line.
8. **Winning is only half of it. Having fun is the other half**: Write a function that prints half of a string, followed by a new line.
9. **Arrays are not pointers**: Write a function that prints n elements of an array of integers, followed by a new line.
10. **strcpy**: Write a function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.
11. **Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers**: Write a function that converts a string to an integer.


## Tasks Part 2

0. **strcat**: Write a function that concatenates two strings.
1. **strncat**: Write a function that concatenates two strings, using at most `n` bytes from `src`.
2. **strncpy**: Write a function that copies a string, similar to `strncpy`.
3. **strcmp**: Write a function that compares two strings, similar to `strcmp`.
4. **I am a kind of paranoid in reverse. I suspect people of plotting to make me happy**: Write a function that reverses the content of an array of integers.
5. **Always look up**: Write a function that changes all lowercase letters of a string to uppercase.
6. **Expect the best. Prepare for the worst. Capitalize on what comes**: Write a function that capitalizes all words of a string.
7. **Mozart composed his music not for the elite, but for everybody**: Write a function that encodes a string into 1337.


## Tasks Part 3

0. **memset**: Write a function that fills memory with a constant byte.
1. **memcpy**: Write a function that copies memory area.
2. **strchr**: Write a function that locates a character in a string.
3. **strspn**: Write a function that gets the length of a prefix substring.
4. **strpbrk**: Write a function that searches a string for any of a set of bytes.
5. **strstr**: Write a function that locates a substring.
6. **Chess is mental torture**: Write a function that prints the chessboard.
7. **The line of life is a ragged diagonal between duty and desire**: Write a function that prints the sum of the two diagonals of a square matrix of integers.
