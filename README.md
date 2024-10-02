# ft_printf
ft_printf is a project that recreates the functionality of the standard C library function printf. This project aims to deepen understanding of variadic functions, string parsing, and output formatting in C.
## Installation
To use this function in your project:
  1. Clone the repository:
     ```bash
     git clone https://github.com/clemllovio/ft_printf.git
     ```
  2. Navigate to the project directory and compile the library:
     ```bash
      cd ft_printf
      make
     ```
## Usage
1. Include the header in your C files:
   ```c
   #include "ft_printf.h"
   ```
2. You can now use ft_printf in your code. For example:
  ```c
  ft_printf("Hello, %s! You are %d years old.\n", "World", 2023);
  ```
## Supported Format Specifiers
This implementation of ft_printf supports the following format specifiers:

  • `%c`: Character

  • `%s`: String

  • `%p`: Pointer address

  • `%d`  and `%i`: Signed decimal integer

  • `%u`: Unsigned decimal integer

  • `%x` and `%X`: Hexadecimal integer(lowercase and uppercase)

  • `%%`: Percent sign

## Credits
This project was developed by Clémence Llovio as part of the curriculum at 42 School.
