# C Project Template

This repository contains a template for C projects at Epitech. It provides a basic structure with a Makefile and a library system that includes common string manipulation functions, following Epitech's coding style and project organization guidelines.

## Project Structure

```
.
├── includes/
│   ├── my.h          # Main header file for the library
│   └── project.h     # Project-specific header file
├── lib/
│   └── my/
│       ├── includes/
│       │   └── my.h  # Library's internal header
│       ├── src/
│       │   └── [...] # Library source files
│       └── Makefile
├── src/
│   └── main.c
└── Makefile
```

## Features

- Pre-configured Makefile with standard rules
- Custom string manipulation library (`libmy`)
- Separate include directories for the project and library
- Source directory for your C files
- Follows Epitech coding style
- Standard compilation flags

## Building the Project

### Available Commands

- `make` or `make all`: Builds the library and the project
- `make lib`: Builds only the library
- `make clean`: Removes object files
- `make fclean`: Removes object files and binaries
- `make re`: Rebuilds the entire project

### Compilation

The project compiles with the following features:
- Uses gcc compiler
- Includes debug information (`-g` flag)
- Includes the custom library (`-lmy`)
- Headers are searched in `./includes` directory

## Getting Started

1. Clone this template:
   ```bash
   git clone https://github.com/NotJuz0o/MY-EPITECH-PROJECT [project-name]
   cd [project-name]
   ```

2. Update the Makefile variables according to your project:
   - `NAME`: Your binary name
   - `SRC`: Your source files
   - `CFLAGS`: Your compilation flags

3. Add your source files in `src/`
4. Add your project headers in `includes/`
5. If needed, add more library functions in `lib/my/src/`

## Header Files

- `includes/my.h`: Contains declarations for all library functions
- `includes/project.h`: Add your project-specific declarations here
- `lib/my/includes/my.h`: Internal library header, contains library-specific definitions

## Author

NotJuz0o
Epitech Promo [2029]
