*This project has been created as part of the 42 curriculum by jesrodri.*

# Libft

## Description

**Libft** is the first project of the 42 curriculum. Its goal is to recreate a subset of the C standard library (`libc`) from scratch, together with a collection of other useful utility functions (string manipulation, memory handling, output to file descriptors and linked lists).

The result is a static library, `libft.a`, that works as a foundational toolkit and will be reused throughout the rest of the curriculum.

### Library contents

#### Part 1 - Libc functions

Re-implementations of standard functions, with the `ft_` prefix:

* **Character checks:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* **Strings:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
* **Memory:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
* **Conversions:** `ft_toupper`, `ft_tolower`, `ft_atoi`
* **Memory allocation:** `ft_calloc`, `ft_strdup`

#### Part 2 - Additional functions

* `ft_substr`: extracts a substring from a string.
* `ft_strjoin`: concatenates two strings into a new one.
* `ft_strtrim`: removes the given characters from the beginning and end of a string.
* `ft_split`: splits a string using a delimiter character into an array of strings.
* `ft_itoa`: converts an integer into a string.
* `ft_strmapi`: applies a function to each character of a string, creating a new string.
* `ft_striteri`: applies a function to each character of a string, passing its address.
* `ft_putchar_fd`: writes a character to a given file descriptor.
* `ft_putstr_fd`: writes a string to a given file descriptor.
* `ft_putendl_fd`: writes a string followed by a newline to a given file descriptor.
* `ft_putnbr_fd`: writes an integer to a given file descriptor.

#### Part 3 - Linked lists

Functions that manipulate lists made of `t_list` nodes (`content` and `next`):

* `ft_lstnew`: creates a new node.
* `ft_lstadd_front`: adds a node at the beginning of the list.
* `ft_lstsize`: counts the nodes of the list.
* `ft_lstlast`: returns the last node of the list.
* `ft_lstadd_back`: adds a node at the end of the list.
* `ft_lstdelone`: frees the content of a node (using `del`) and the node itself.
* `ft_lstclear`: deletes and frees a node and all its successors.
* `ft_lstiter`: applies a function to the content of each node.
* `ft_lstmap`: creates a new list by applying a function to the content of each node.

## Instructions

### Requirements

* A C compiler (`cc`) supporting the `-Wall -Wextra -Werror` flags.
* The `make` utility.

### Compilation

From the root of the repository:

```bash
make
```

This compiles every `.c` file into an object file (`.o`) and packs them into the library `libft.a`.

Other rules:

* `make clean`: removes the object files.
* `make fclean`: removes the object files and `libft.a`.
* `make re`: rebuilds everything from scratch.

### Usage

Include the header in your code:

```c
#include "libft.h"
```

and link your program with the library:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
```

## Resources

* Linux man pages: `man 3 atoi`, `man 3 memcpy`, `man bzero`, `man strlcat`, `man 3 malloc`.
* [GNU Make manual](https://www.gnu.org/software/make/manual/)
* [Valgrind documentation](https://valgrind.org/docs/manual/)
* Libft subject (42 curriculum).
* Video tutorials from the BroCode playlist:
  * [While loops in C is easy!](https://www.youtube.com/watch?v=6YNYuJ_jiu0&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe&index=22)
  * [Arrays in C is easy!](https://www.youtube.com/watch?v=6Hk2aE_SRzY&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe&index=30)
  * [Malloc in C is easy!](https://www.youtube.com/watch?v=n_Se6bt8jM0&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe&index=43)
  * [Calloc in C is easy!](https://www.youtube.com/watch?v=l8DU9ZeT3o8&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe&index=44)

### Use of AI

AI (Claude) was used as a learning tutor throughout the project, in these ways:

* **At the beginning**, I asked for complete code so I could read a structure and understand it.
* **Later**, I asked for partially written functions with blanks (loops, safety checks, assignments) that I filled in myself.
* **Afterwards**, I wrote the functions on my own and asked the AI to review them: it pointed out bugs, Norm errors and edge cases.
* **For understanding**, I asked for explanations in my native language, with simple examples instead of the most optimized solution. Topics included pointers, `malloc`, `**` pointers, linked lists, the Makefile and valgrind.

The AI was a third opinion: first my own reasoning, then my study peers, and then the AI. I tested the functions myself and I can explain each one without help.