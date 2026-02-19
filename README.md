*This project has been created as part of the 42 curriculum by muracar.*

# libft

## Description

### Project Context
This project is part of the 42 curriculum and represents the first step toward building
a solid foundation in C programming. The objective is to create a personal C library
by reimplementing a selection of standard C library functions from scratch.

### Objectives
The main goal of this project is to develop a deep understanding of:
- Memory management using `malloc` and `free`
- Pointer manipulation and address arithmetic
- String and memory handling at a low level
- Writing reusable and well-structured C functions

By avoiding the use of existing libc implementations, the project encourages a clear
understanding of how these functions work internally.

### Scope of the Library
The library includes reimplementations of commonly used standard functions related to:
- Character type checking
- String manipulation
- Memory operations
- Data conversion
- Output to file descriptors

Additionally, bonus functions introduce linked list management, reinforcing knowledge
of dynamic data structures and pointer-based design.

### Reusability and Future Use
The resulting library is designed to be modular and reusable, allowing it to be
integrated into future projects within the 42 curriculum. It serves as a foundational
toolkit that will be expanded upon and reused throughout the student’s progression.

## Library Overview
The library contains reimplementations of standard libc functions as well as additional
functions required by the libft subject. All functions are written in C and follow the
42 coding standard (Norm).

The library is designed to be:
- Modular
- Reusable
- Easy to integrate into other C projects

## Library Content

### Part 1 – Standard C Library Functions
This part consists of reimplementations of several standard C library functions.
Some of these functions (such as `strlcpy`, `strlcat`, and `bzero`) are not included
by default in the GNU C Library (glibc). On glibc-based systems, they can be tested
against the system implementation by including `<bsd/string.h>` and compiling with
the `-lbsd` flag.

This part focuses on understanding the low-level behavior of string and memory
manipulation functions.

### Part 2 – Additional Functions
This part introduces functions that are either not present in the standard libc
or exist in a different form. These functions rely heavily on dynamic memory
allocation and reinforce safe memory handling practices.

The implemented functions include:
- Substring extraction (`ft_substr`)
- String concatenation (`ft_strjoin`)
- String trimming (`ft_strtrim`)
- String splitting (`ft_split`)
- Integer to string conversion (`ft_itoa`)
- String iteration and mapping (`ft_strmapi`, `ft_striteri`)
- Output functions using file descriptors (`ft_putchar_fd`, `ft_putstr_fd`,
  `ft_putendl_fd`, `ft_putnbr_fd`)

### Part 3 – Linked List Functions (Bonus)
This part focuses on implementing a singly linked list data structure using the
`t_list` structure. It introduces dynamic data structures and pointer-based
manipulation.

The linked list API includes:
- Node creation and insertion
- List traversal and size calculation
- Adding and removing elements
- Iteration and mapping over list contents
- Proper memory cleanup using function pointers

This part strengthens understanding of memory ownership, abstraction, and reusable
data structure design.

## Instructions

### Compilation
To compile the library, run:

    make

This command compiles all source files using the `cc` compiler with the flags
`-Wall -Wextra -Werror` and generates the static library `libft.a`.

### Usage
To use the library in your project:

1. Include the header file in your source code:

       #include "libft.h"

2. Compile your program and link it with the library:

       cc main.c libft.a

### Cleaning
Remove object files:

    make clean

Remove object files and the library:

    make fclean

Recompile the library from scratch:

    make re

## Resources

### References
The following resources were used during the development of this project:

- The official 42 libft subject and documentation
- https://42-cursus.gitbook.io/guide/0-rank-00/libft
- Linux manual pages (man pages) for standard C library functions
- cs.colby.edu C programming reference materials

These resources were consulted to understand the expected behavior of standard
functions, edge cases, and implementation constraints defined by the 42 curriculum.

### AI Usage
Artificial Intelligence tools were used as a supportive learning resource throughout
the project.

AI was used for:
- Clarifying function behavior described in the libft subject
- Understanding edge cases and error handling
- Explaining C concepts such as pointers, memory management, and data structures
- Assisting with documentation writing (README content)

AI was not used to generate or copy source code. All implementations were written
manually by the author(s) in compliance with the academic integrity rules of the
42 curriculum.