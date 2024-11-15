# 0x0A. C - malloc, free

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What is the difference between automatic and dynamic allocation
- What is `malloc` and `free` and how to use them
- Why and when to use `malloc`
- How to use `valgrind` to check for memory leaks

## Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

### More Info
- You do not have to learn about `calloc` and `realloc`.

## Tasks

### 0. Float like a butterfly, sting like a bee
- Write a function that creates an array of chars, and initializes it with a specific char.
	- Prototype: `char *create_array(unsigned int size, char c);`
	- Returns `NULL` if `size` = 0
	- Returns a pointer to the array, or `NULL` if it fails

### 1. The woman who has no imagination has no wings
- Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
	- Prototype: `char *_strdup(char *str);`
	- The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
	- Returns `NULL` if `str` = `NULL`
	- On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available

### 2. He who is not courageous enough to take risks will accomplish nothing in life
- Write a function that concatenates two strings.
	- Prototype: `char *str_concat(char *s1, char *s2);`
	- The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated
	- If `NULL` is passed, treat it as an empty string
	- The function should return `NULL` on failure

### 3. If you even dream of beating me you'd better wake up and apologize
- Write a function that returns a pointer to a 2 dimensional array of integers.
	- Prototype: `int **alloc_grid(int width, int height);`
	- Each element of the grid should be initialized to 0
	- The function should return `NULL` on failure
	- If `width` or `height` is 0 or negative, return `NULL`

### 4. It's not bragging if you can back it up
- Write a function that frees a 2 dimensional grid previously created by your `alloc_grid` function.
	- Prototype: `void free_grid(int **grid, int height);`
	- Note that we will compile with your `alloc_grid.c` file. Make sure it compiles.

## Repository
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `malloc_free`
- Files: `0-create_array.c`, `1-strdup.c`, `2-str_concat.c`, `3-alloc_grid.c`, `4-free_grid.c`

## Tasks Part 2

### 0. Trust no one
- Write a function that allocates memory using `malloc`.
	- Prototype: `void *malloc_checked(unsigned int b);`
	- Returns a pointer to the allocated memory
	- If `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of 98

### 1. string_nconcat
- Write a function that concatenates two strings.
	- Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
	- The returned pointer shall point to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated
	- If the function fails, it should return `NULL`
	- If `n` is greater or equal to the length of `s2` then use the entire string `s2`
	- If `NULL` is passed, treat it as an empty string

### 2. _calloc
- Write a function that allocates memory for an array, using `malloc`.
	- Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
	- The `_calloc` function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory.
	- The memory is set to zero
	- If `nmemb` or `size` is 0, then `_calloc` returns `NULL`
	- If `malloc` fails, then `_calloc` returns `NULL`

### 3. array_range
- Write a function that creates an array of integers.
	- Prototype: `int *array_range(int min, int max);`
	- The array created should contain all the values from `min` (included) to `max` (included), ordered from `min` to `max`
	- Return: the pointer to the newly created array
	- If `min` > `max`, return `NULL`
	- If `malloc` fails, return `NULL`

## Repository
- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `more_malloc_free`
- Files: `0-malloc_checked.c`, `1-string_nconcat.c`, `2-calloc.c`, `3-array_range.c`