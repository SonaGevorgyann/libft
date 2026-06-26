# Libft

**Libft** is a custom static C library developed as part of the **42 School** curriculum. The project consists of reimplementing essential functions from the C standard library, along with additional utility functions and linked list operations. It serves as a foundation for future C projects by providing a reusable collection of reliable and efficient functions.

## Features

* Reimplementation of standard C library functions
* Custom string and memory manipulation utilities
* Dynamic memory management functions
* Character classification and conversion functions
* File descriptor output functions
* Bonus linked list implementation
* Built as a reusable static library (`libft.a`)

## Technologies

* C
* Makefile
* GCC / Clang

## Project Structure

```text
libft/
├── ft_*.c
├── ft_*_bonus.c
├── libft.h
├── Makefile
└── libft.a (generated after compilation)
```

## Function Categories

### Character Functions

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_toupper`
* `ft_tolower`

### String & Memory Functions

* `ft_strlen`
* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_memchr`
* `ft_memcmp`
* `ft_strnstr`
* `ft_strdup`

### Memory Allocation

* `ft_calloc`

### Conversion Functions

* `ft_atoi`
* `ft_itoa`

### Additional Utility Functions

* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_strmapi`
* `ft_striteri`

### File Descriptor Output

* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

### Bonus – Linked Lists

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

## Getting Started

### Clone the repository

```bash
git clone https://github.com/SonaGevorgyann/libft.git
cd libft
```

### Build the library

Compile the mandatory part:

```bash
make
```

Compile the bonus functions:

```bash
make bonus
```

Other useful commands:

```bash
make clean
make fclean
make re
```

## Using the Library

Include the header:

```c
#include "libft.h"
```

Compile your program while linking the library:

```bash
gcc main.c -L. -lft -o program
```

## Learning Outcomes

This project helped me strengthen my understanding of:

* Low-level C programming
* Pointers and pointer arithmetic
* Memory allocation and management
* String and memory manipulation
* Linked lists
* Static library creation
* Modular software design
* Writing efficient and reusable code

## Author

**Sona Gevorgyan**

GitHub: https://github.com/SonaGevorgyann
