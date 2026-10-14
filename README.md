*This project has been created as part of the 42 curriculum by maalruwa*

# Libft

## Description

Libft is a custom C library created as part of the 42 curriculum.
The goal of this project is to recreate commonly used functions from the standard C library and develop additional utility functions for strings, memory management, character manipulation, and linked lists.

The project helps develop a strong understanding of:

- C programming fundamentals
- Pointers and arrays
- Memory allocation and management
- Strings and character manipulation
- Linked lists
- Static libraries
- Makefiles and compilation
- Writing reusable C functions

The library is compiled into a static library named "libft.a", which can be reused in other C projects.

## Instructions

Compilation

Make sure a C compiler and "make" are installed.

Clone the repository and enter the project directory:

git clone 
cd libft

Compile the library:

make

This creates:

libft.a

Makefile Commands

- "make" — compiles the library.
- "make clean" — removes object files.
- "make fclean" — removes object files and "libft.a".
- "make re" — cleans and recompiles the library.

Using Libft

Include the header in your C project:

#include "libft.h"

Then compile your program with the library:

cc main.c -L. -lft -o program

Project Structure

libft/
├── Makefile
├── README.md
├── libft.h
├── ft_*.c
└── ...

"libft.h" contains the function prototypes and linked-list structure, while the ".c" files contain the implementations.

Technical Choices

The project is written entirely in C and follows the coding standards and restrictions of the 42 curriculum.

Dynamic memory is handled using functions such as "malloc" and "free", with attention to allocation failures and proper memory cleanup.

A static library was chosen to make the implemented functions reusable in future C projects.

## Resources

- GeeksforGeeks — C Programming Language
- Reddit — C programming discussions
- Makefile tutorials
- C standard library documentation and manual pages:
  "man malloc", "man free", "man memcpy", "man memmove", "man strlen", "man strchr", "man strncmp"

AI Usage

AI tools were used as a supplementary learning and development resource.

AI assistance was used to:

- Explain C concepts and standard library behavior.
- Clarify pointers and memory management.
- Understand expected function behavior.
- Identify possible edge cases.
- Assist with debugging and investigating unexpected behavior.
- Review and improve the README documentation.

The implementation was developed and tested as part of the 42 curriculum. AI was used as a learning and review aid rather than as a replacement for understanding the code.

## Detailed Description

Libft is organized into several groups of functions:

Character Tests and Conversion

Functions for checking and converting characters:

"ft_isalpha", "ft_isdigit", "ft_isalnum", "ft_isascii", "ft_isprint", "ft_toupper", "ft_tolower".

String Functions

Functions for measuring, copying, searching, comparing, creating, and modifying strings:

"ft_strlen", "ft_strlcpy", "ft_strlcat", "ft_strchr", "ft_strrchr", "ft_strncmp", "ft_strnstr", "ft_substr", "ft_strjoin", "ft_strtrim", "ft_split", "ft_strmapi", "ft_striteri".

Memory Functions

Functions for allocating, initializing, copying, moving, searching, and comparing memory:

"ft_calloc", "ft_memset", "ft_bzero", "ft_memcpy", "ft_memmove", "ft_memchr", "ft_memcmp".

Conversion and Duplication

Functions for converting between strings and integers and duplicating strings:

"ft_strdup", "ft_atoi", "ft_itoa".

Linked Lists

Functions for creating and manipulating singly linked lists:

"ft_lstnew", "ft_lstadd_front", "ft_lstsize", "ft_lstlast", "ft_lstadd_back", "ft_lstdelone", "ft_lstclear", "ft_lstiter", "ft_lstmap".

The linked-list structure is defined as:

typedef struct s_list
{
    void            *content;
    struct s_list    *next;
} t_list;

The "content" pointer stores the data of each node, while "next" points to the following node.

Static Library

All functions are compiled into "libft.a". This allows the library to be linked to other C programs and reused without recompiling each source file separately.

Author

42 student project — Libft.