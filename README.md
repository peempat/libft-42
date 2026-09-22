*This project has been created as part of the 42 curriculum by pnanna.*

# Libft

## Description

Libft is a custom C library containing reimplementations of selected libc
functions, additional string and memory utilities, output helpers, and singly
linked-list operations. It provides reusable foundations for later 42 projects.

The library is divided into three mandatory parts:

- Part 1: character checks, memory operations, string operations, conversion,
  and allocation helpers based on libc.
- Part 2: string creation and transformation, splitting, integer conversion,
  iteration, and file-descriptor output.
- Part 3: creation, traversal, insertion, deletion, iteration, and mapping of
  `t_list` linked lists.

## Instructions

Run `make` to compile all sources and create `libft.a` in the project root.
Run `make clean` to remove object files, `make fclean` to also remove the
library, or `make re` to rebuild it from scratch.

Include `libft.h` in a C program and link the library during compilation:

```sh
cc -Wall -Wextra -Werror main.c libft.a -o program
```

## Resources

- The project subject, `libft.pdf`, version 19.3.
- Local manual pages such as `man 3 strlen`, `man 3 malloc`, and related libc
  documentation.
- The C language documentation for pointers, allocation, and linked lists.

AI assistance was used to clarify the subject requirements, draft function
implementations, review edge cases, and design validation checks. The author
must review and understand every function before submitting or defending it.
