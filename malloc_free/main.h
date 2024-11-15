#ifndef main_h
#define main_h

/**
 * main.h
 * Header functions for functions_nested_loops - more_functions_nested_loops - pointers_arrays_strings.
 */

int _abs(int);
int _atoi(char *s);
int _isalpha(int c);
int _isdigit(int c);
int _islower(int c);
int _isupper(int c);
int _pow_recursion(int x, int y);
int _putchar(char c);
int _sqrt_recursion(int n);
int _strlen(char *s);
int _strlen_recursion(char *s);
int add(int, int);
int factorial(int n);
int is_palindrome(char *s);
int is_prime_number(int n);
int mul(int a, int b);
int print_last_digit(int);
int print_sign(int n);
unsigned int _strspn(char *s, char *accept);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strcpy(char *dest, char *src);
char *_strpbrk(char *s, char *accept);
char *create_array(unsigned int size, char c);
char *_strstr(char *haystack, char *needle);
void _print_rev_recursion(char *s);
void _puts(char *str);
void _puts_recursion(char *s);
void jack_bauer(void);
void more_numbers(void);
void print_alphabet(void);
void print_alphabet_x10(void);
void print_array(int *a, int n);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void print_diagonal(int n);
void print_line(int n);
void print_most_numbers(void);
void print_numbers(void);
void print_rev(char *s);
void print_square(int size);
void print_to_98(int n);
void print_triangle(int size);
void puts2(char *str);
void puts_half(char *str);
void reset_to_98(int *n);
void rev_string(char *s);
void rev_array(int *a, int n);
void swap_int(int *a, int *b);
int wildcmp(char *s1, char *s2);
int *array_range(int min, int max);
char *strdup(char *str);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);

#endif