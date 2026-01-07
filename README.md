# _printf - Custom printf Implementation

This is a custom implementation of the C standard library's printf function.

## Features
- %c - Print a single character
- %s - Print a string
- %% - Print a percent sign

## Usage
```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\\n", "World");
    _printf("Character: %c\\n", 'A');
    _printf("Percent: %%\\n");
    return (0);
}
```

## Files
- `main.h` - Header file with function prototypes
- `_printf.c` - Main printf function
- `print_char.c` - Handles %c specifier
- `print_string.c` - Handles %s specifier
- `print_percent.c` - Handles %% specifier
- `_putchar.c` - Custom putchar function

## Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## Authors
Usal Isgandarov

## License
This project is part of the Holberton School curriculum.
