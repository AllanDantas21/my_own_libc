# My Own Libc

 A project where I am recreating a subset of functions from the C standard library. This is a personal project to deepen my understanding of low-level programming, memory management, and system calls in C.

## Installation

How to Use

```bash
git clone https://github.com/AllanDantas21/my_own_libc.git
cd my_own_libc
```

## Usage

```c
#include "my_libc.h"

int main() {
    char str[] = "Hello, World!";
    printf("Length of string: %d\n", my_strlen(str));
    return 0;
}
```

## Project Structure

```bash
my_own_libc/
├── include/         # Header files (.h) that expose the function prototypes
│   └── my_libc.h    # Main header file with all function declarations
│
├── src/             # Source files (.c) with function implementations
│   ├── memory/      # Memory-related functions (e.g., malloc, memset)
│   ├── string/      # String manipulation functions (e.g., strlen, strcpy)
|   ├── lists/       #
|   ├── output/      # 
|   ├── tab/         #
│
├── obj/             # Object files (.o) generated during compilation
│   └── (Populated after running `make`)
│
├── tests.c          # Sample test code
├── Makefile         # Build script to compile the library
├── LICENSE          # License for the project
└── README.md        # Project documentation

```
## License
