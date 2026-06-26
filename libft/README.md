*This project has been created as part of the 42 curriculum by tatmarti*

## Description:

Libft is a custom C library developed as part of the 42 curriculum.
The goal of this project is to recreate functions from the standard C library (libc),
as well as implement additional functions for memory manipulation, strings, and linked
lists.

This project focuses on developing a solid foundation in:
 - Memory manipulation
 - Pointer usage
 - Data structures
 - Modular programming

The created library will be reused in future projects.

## Instructions:
To compile the library, run:
	make

This will generate the file:
	libft.a

Cleaning:

	make clean   # removes object files (.o)
	make fclean  # removes everything (.o + .a)
	make re      # recompiles everything

## Usage

To use this library in your own C projects, include the header file in your code and link the static library during compilation:
```c
#include "libft.h"
```

Compile your project along with libft.a:
```c
cc main.c -L. -lft -o my_program
```

## Resources:

References
 - The C Programming Language — Kernighan & Ritchie
 - System manuals (man malloc, man write, etc.)
 - GNU C Library Documentation
 - Stack Overflow (for conceptual understanding)

AI Usage
AI tools (like ChatGPT) were used to:
 - Understand complex concepts (memory, linked lists).
 - Clarify function behaviors and edge cases.
 - Organize study materials.
 - Review and improve code clarity.

All implementations were done, tested, and validated manually, ensuring full understanding
and compliance with the project requirements.

## List of Functions

The library is divided into three main parts:

<details>
  <summary><b>Part 1 — Libc Functions (ctype, string, stdlib)</b></summary>
  <br>
	Reimplementation of standard functions:

  * `ft_isalpha` – Checks for an alphabetic character.
  * `ft_isdigit` – Checks for a digit (0 through 9).
  * `ft_isalnum` – Checks for an alphanumeric character.
  * `ft_isascii` – Checks whether c fits into the ASCII character set.
  * `ft_isprint` – Checks for any printable character.
  * `ft_strlen` – Computes the length of a string.
  * `ft_memset` – Fills memory with a constant byte.
  * `ft_bzero` – Erases the data in the n bytes of the memory.
  * `ft_memcpy` – Copies memory area.
  * `ft_memmove` – Copies memory area safely (handles overlap).
  * `ft_strlcpy` – Size-bounded string copying.
  * `ft_strlcat` – Size-bounded string concatenation.
  * `ft_toupper` – Converts a char to uppercase.
  * `ft_tolower` – Converts a char to lowercase.
  * `ft_strchr` – Locates character in string.
  * `ft_strrchr` – Locates character in string (from the end).
  * `ft_strncmp` – Compares two strings up to n bytes.
  * `ft_memchr` – Scans memory for a character.
  * `ft_memcmp` – Compares memory areas.
  * `ft_strnstr` – Locates a substring in a string.
  * `ft_atoi` – Converts a string to an integer.
  * `ft_calloc` – Allocates memory and sets it to zero.
  * `ft_strdup` – Duplicates a string.

</details>

<details>
  <summary><b>Part 2 — Additional Functions</b></summary>
  <br>
	High-level utility functions:

  * `ft_substr` – Extracts a substring from a string.
  * `ft_strjoin` – Concatenates two strings into a new one.
  * `ft_strtrim` – Trims specific characters from the start and end of a string.
  * `ft_split` – Splits a string into an array of strings using a delimiter.
  * `ft_itoa` – Converts an integer to a string.
  * `ft_strmapi` – Applies a function to each character of a string (creating a new string).
  * `ft_striteri` – Applies a function to each character of a string (in-place).
  * `ft_putchar_fd` – Outputs a character to a file descriptor.
  * `ft_putstr_fd` – Outputs a string to a file descriptor.
  * `ft_putendl_fd` – Outputs a string followed by a newline to a file descriptor.
  * `ft_putnbr_fd` – Outputs an integer to a file descriptor.

</details>

<details>
  <summary><b>Part 3 — Linked Lists (Bonus)</b></summary>
  <br>
	Implementation of singly linked lists:

  * `ft_lstnew` – Creates a new list node.
  * `ft_lstadd_front` – Adds a node at the beginning of the list.
  * `ft_lstsize` – Counts the number of nodes in the list.
  * `ft_lstlast` – Returns the last node of the list.
  * `ft_lstadd_back` – Adds a node at the end of the list.
  * `ft_lstdelone` – Deletes a single node and its content.
  * `ft_lstclear` – Deletes an entire list.
  * `ft_lstiter` – Iterates over a list and applies a function to each node's content.
  * `ft_lstmap` – Creates a new list by applying a function to each node of an existing list.
</details>

## Technical Decisions

 - Use of malloc and free for memory management.
 - Strict adherence to the 42 Norm (max. 25 lines per function).
 - Modular and reusable code.
 - Handling of edge cases (NULL, empty strings, etc.).

Author
<tatmarti> — 42 Student
