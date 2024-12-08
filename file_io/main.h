#ifndef MAIN_H
#define MAIN_H

/**
 * main.h - Header file for the main project
 * Header functions for the main project
 */

/* Character functions */
int _putchar(char c); /* Provided by Holberton School */
int _isalpha(int c);
int _isdigit(int c);
int _islower(int c);
int _isupper(int c);

/* String functions */
int _atoi(char *s);
int _strlen(char *s);
int _strlen_recursion(char *s);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strchr(char *s, char c);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);

/* Memory functions */
char *_memcpy(char *dest, char *src, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
void *malloc_checked(unsigned int b);

/* Math functions */
int _abs(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int add(int a, int b);
int mul(int a, int b);
int factorial(int n);
int is_prime_number(int n);
int print_last_digit(int n);
int print_sign(int n);

/* Array functions */
void print_array(int *a, int n);
void rev_array(int *a, int n);
int *array_range(int min, int max);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

/* Miscellaneous functions */
void reset_to_98(int *n);
void swap_int(int *a, int *b);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void _puts(char *str);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
char *create_array(unsigned int size, char c);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char *_concat(char *s1, char *s2);

/* Print functions */
void jack_bauer(void);
void more_numbers(void);
void print_alphabet(void);
void print_alphabet_x10(void);
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

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void check_args(int argc);
int open_file_from(char *filename);
int open_file_to(char *filename);
void copy_content(int file_from, int file_to);
void close_file(int fd);

#endif /* MAIN_H */
