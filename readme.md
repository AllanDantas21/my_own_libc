
Memória atualizada
Aqui está um modelo para o seu README:

My Own Libc
Welcome to My Own Libc, a project where I am recreating a subset of functions from the C standard library. This is a personal project to deepen my understanding of low-level programming, memory management, and system calls in C.

Project Overview
The goal of this project is to replicate essential functions from the C standard library (libc). These implementations focus on providing a deeper understanding of how these fundamental functions work at a lower level, without relying on built-in implementations.

Features
Custom Implementations: I have recreated common C functions such as strlen, strcpy, malloc, free, and others.
Memory Management: Some functions mimic the way the standard library handles dynamic memory allocation.
System Call Wrappers: Where necessary, system calls are used directly to replicate standard behavior.
Functions Implemented
Here are some of the key functions that have been implemented so far:

ft_strlen: Counts the number of characters in a string.
ft_strcpy: Copies one string to another.
ft_memset: Fills a block of memory with a particular value.
ft_memcpy: Copies memory from one location to another.
ft_strcmp: Compares two strings.
(Add more functions as you implement them.)

How to Use
Clone the Repository:

bash
git clone https://github.com/AllanDantas21/my_own_libc.git
cd my_own_libc
Build the Library: Use make to compile the library:

bash
make
Include in Your Project: After building, you can include this library in your own C project by linking it during compilation.

Example usage in a C file:

c
#include "libft.h"  // Adjust according to the project structure

int main() {
    char str[] = "Hello, World!";
    printf("Length of string: %d\n", ft_strlen(str));
    return 0;
}
Compile and run your project:

bash
gcc -L. -lmy_own_libc your_program.c -o your_program
./your_program
Project Structure
bash

my_own_libc/
├── src/             # Source files
├── include/         # Header files
├── Makefile         # Build script
└── README.md        # Project documentation
Contributing
This is a personal learning project, but feel free to submit issues or suggestions! Contributions are welcome.