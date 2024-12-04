# C - Singly Linked Lists

## Description

This project involves working with singly linked lists in C. You will learn when and why to use linked lists versus arrays and how to build and use linked lists.

## Concepts

- Linked Lists
- Google
- YouTube

## Learning Objectives

By the end of this project, you should be able to explain the following without the help of Google:

### General

- When and why to use linked lists vs arrays
- How to build and use linked lists

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- No global variables allowed
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do, it won’t be taken into account
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
- Don’t forget to push your header file
- All your header files should be include guarded

### Data Structure

Please use this data structure for this project:

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
```

## Tasks

### 0. Print list

Write a function that prints all the elements of a `list_t` list.

- **Prototype:** `size_t print_list(const list_t *h);`
- **Return:** the number of nodes
- **Format:** see example
- If `str` is `NULL`, print `[0] (nil)`
- You are allowed to use `printf`

**File:** `0-print_list.c`

### 1. List length

Write a function that returns the number of elements in a `list_t` list.

- **Prototype:** `size_t list_len(const list_t *h);`

**File:** `1-list_len.c`

### 2. Add node

Write a function that adds a new node at the beginning of a `list_t` list.

- **Prototype:** `list_t *add_node(list_t **head, const char *str);`
- **Return:** the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`

**File:** `2-add_node.c`

### 3. Add node at the end

Write a function that adds a new node at the end of a `list_t` list.

- **Prototype:** `list_t *add_node_end(list_t **head, const char *str);`
- **Return:** the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`

**File:** `3-add_node_end.c`

### 4. Free list

Write a function that frees a `list_t` list.

- **Prototype:** `void free_list(list_t *head);`

**File:** `4-free_list.c`

## Repository

- **GitHub repository:** `holbertonschool-low_level_programming`
- **Directory:** `singly_linked_lists`
