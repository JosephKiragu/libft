# libft

`libft` is a C library project that aims to recreate some of the C standard library functions, as well as additional utility functions commonly used in programming. This project is part of the 42 coding school curriculum and helps students solidify their understanding of C programming, memory management, and data structures.

## Features

- String manipulation functions, such as `ft_strdup`, `ft_strjoin`, `ft_strncmp`, and `ft_strtrim`.
- Memory management functions, such as `ft_memset`, `ft_memcpy`, `ft_memmove`, and `ft_memcmp`.
- Linked list data structure implementation with functions for creation, modification, and traversal.
- Integer manipulation functions, such as `ft_itoa`, `ft_atoi`, and `ft_isdigit`.
- File descriptor manipulation functions, such as `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and `ft_putnbr_fd`.

## Getting Started

### Prerequisites

- A Unix-based operating system (macOS, Linux, or WSL on Windows)
- GCC compiler
- `make` utility

### Installation

1. Clone the repository:
```
git clone https://github.com/JosephKiragu/libft.git
```

2. Change into the project directory:
```
cd libft
```

3. Compile the project using the provided `Makefile`:
```
make
```

### Usage

1. Include the header file `libft.h` in your C source files where you want to use the `libft` functions.

```c
#include "libft.h"
```

2. Use the `libft` functions in your code. Here's an example:

```c
#include "libft.h"

int main(void)
{
    char *src = "Hello, World!";
    char *dst;

    dst = ft_strdup(src);
    ft_putstr(dst);
    ft_putchar('\n');

    free(dst);
    return 0;
}
```

3. Compile your program with the libft object files:

```
gcc -Wall -Wextra -Werror -I./ -o your_program your_program.c libft.a
```

4. Run your program:

```
./your_program
```

## Testing

The project comes with a test suite. To run the tests, follow these steps:

1. Compile the test program:
```
make test
```

2. Run the test program:
```
./test_libft
```

