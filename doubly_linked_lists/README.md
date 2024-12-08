# C - Doubly Linked Lists

## Project Badge
**0%**

## Description
This project involves implementing various functions to manipulate doubly linked lists in C. The tasks include printing the list, getting the length, adding nodes at the beginning and end, freeing the list, getting a node at a specific index, summing the list, inserting at an index, and deleting at an index.

## Learning Objectives
By the end of this project, you should be able to:
- Explain what a doubly linked list is.
- Use doubly linked lists in C.
- Independently find the right sources of information.

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `python3` (version 3.8.5)
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Code should follow the Betty style
- No global variables
- No more than 5 functions per file
- Allowed C standard library functions: `malloc`, `free`, `printf`, `exit`
- Prototypes of all functions should be included in a header file called `lists.h`
- Header files should be include guarded

## Data Structure
```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
```

## Tasks
1. **Print list**: Write a function that prints all the elements of a `dlistint_t` list.
2. **List length**: Write a function that returns the number of elements in a `dlistint_t` list.
3. **Add node**: Write a function that adds a new node at the beginning of a `dlistint_t` list.
4. **Add node at the end**: Write a function that adds a new node at the end of a `dlistint_t` list.
5. **Free list**: Write a function that frees a `dlistint_t` list.
6. **Get node at index**: Write a function that returns the nth node of a `dlistint_t` linked list.
7. **Sum list**: Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.
8. **Insert at index**: Write a function that inserts a new node at a given position.
9. **Delete at index**: Write a function that deletes the node at index of a `dlistint_t` linked list.

## Repository
- **GitHub repository**: `holbertonschool-low_level_programming`
- **Directory**: `doubly_linked_lists`