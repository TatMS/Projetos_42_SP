*This project has been created as part of the 42 curriculum by tatmarti.*

## Description

This project consists of recoding the famous standard C library function `printf`. The main goal is to understand and implement variadic functions in C (using `stdarg.h`), while creating a structured, clean, and extensible code architecture. Once completed, this function is encapsulated into a static library (`libftprintf.a`) to be reused in future 42 C projects.

---

## Instructions

This project uses a Makefile to manage compilation efficiently.

Clone the repository:
```bash
git clone <your-repository>

```

Navigate into the folder and run the command:

```bash
make

```

This will generate the `libftprintf.a` file in the root of the project.

To clean the object files (.o), use:

```bash
make clean

```

To remove everything and start fresh, use:

```bash
make fclean

```

### How to Use

To use this library in your own programs, include the header in your `.c` file:

```c
#include "ft_printf.h"

```

Compile your program linking the `libftprintf.a` library:

```bash
cc your_program.c libftprintf.a -o your_program

```

---

## Resources

The development of this project was based on the official C language documentation and standard UNIX system manuals:

* **Man printf (3)**: [Linux Programmer's Manual](https://man7.org/linux/man-pages/man3/printf.3.html) — Official specification for the behavior, return values, and type handling of the original function.
* **Man stdarg (3)**: [Linux Programmer's Manual](https://man7.org/linux/man-pages/man3/stdarg.3.html) — Documentation on the variadic arguments library and the inner workings of the `va_list`, `va_start`, `va_arg`, and `va_end` macros.

AI Usage. In accordance with the project guidelines, AI tools (such as ChatGPT) were utilized to:

* Understand more complex theoretical concepts.
* Clarify function behavior and potential edge cases.
* Organize study materials.
* Review and improve code clarity without direct code-copying.

---

## Technical Information

Language: C.

Norm: The code strictly follows the 42 Norminette rules.

Management: Created as a static library (.a).

Key concepts:

* Variadic functions (stdarg.h).
* Recursion (used for base conversion and character counting).
* Pointer manipulation.
* Use of the `write` system call.

The project was entirely developed in accordance with the strict style guidelines of the **Norminette**, structured modularly, and fully protected against memory leaks.

## Features

`ft_printf` supports the following format conversions:

* **%c**: Prints a single character.
* **%s**: Prints a string.
* **%p**: Prints a pointer address in hexadecimal format.
* **%d**: Prints a decimal number (base 10).
* **%i**: Prints an integer number (base 10).
* **%u**: Prints an unsigned decimal number.
* **%x**: Prints a lowercase hexadecimal number.
* **%X**: Prints an uppercase hexadecimal number.
* **%%**: Prints a literal percent sign.

## Fundamental Learnings

The development of this project consolidated deep low-level programming and computer architecture concepts:

* **Variadic Functions (`<stdarg.h>`)**: Learning how to manage functions that accept an unpredictable number of arguments by directly manipulating the execution stack (*call stack*) using the `va_list`, `va_start`, `va_arg`, and `va_end macros`.
* **Default Argument Promotion**: Understanding how the C compiler automatically promotes short data types (such as `char`) to `int` when they are passed into variadic functions.
* **Type and Memory Architecture**: Using `unsigned int` (32 bits) to handle standard hexadecimal numbers (`%x`/`%X`) and `unsigned long long` (64 bits) to read the full memory addresses of pointers (`%p`) without data loss or truncation.
* **Recursion and Stack Management**: Applying recursive calls to perform mathematical conversions across numeric bases (Base 10 and Base 16), leveraging the natural behavior of the call stack to order digits without wasting memory on dynamic allocations (`malloc`).
* **Robustness and Error Handling**: Shielding the code against catastrophic failures (*Segmentation Fault*), including dedicated handling for the lower bound of integers (`-2147483648`) and protections for null pointers (`NULL`) in strings and pointers.
* **Encapsulamento com `static`**: Using static functions to limit code scope and protect helper functions, keeping the library clean, organized, and professional.
---

Author

tatmarti — 42 SP Student
