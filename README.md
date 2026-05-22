# C Language Concepts

This repository now contains a compact checklist of important **C programming language concepts**.

## 1) Basics
- History of C and use cases
- Structure of a C program (`#include`, `main`, statements)
- Tokens: keywords, identifiers, constants, strings, operators
- Data types: `char`, `int`, `float`, `double`, `void`
- Type modifiers: `short`, `long`, `signed`, `unsigned`
- Variables and constants (`const`, `#define`)
- Input/output: `printf`, `scanf`, `getchar`, `putchar`

## 2) Operators and Expressions
- Arithmetic operators (`+`, `-`, `*`, `/`, `%`)
- Relational operators (`==`, `!=`, `<`, `>`, `<=`, `>=`)
- Logical operators (`&&`, `||`, `!`)
- Assignment and compound assignment operators
- Increment/decrement (`++`, `--`)
- Bitwise operators (`&`, `|`, `^`, `~`, `<<`, `>>`)
- Conditional operator (`?:`)
- `sizeof` operator
- Type casting and conversion rules
- Operator precedence and associativity

## 3) Control Flow
- `if`, `if-else`, nested `if`
- `switch`, `case`, `default`
- Loops: `for`, `while`, `do-while`
- `break`, `continue`, `goto`

## 4) Functions
- Function declaration, definition, and call
- Parameters and return values
- Call by value
- Recursion
- Function prototypes
- Scope and lifetime of variables
- Storage classes: `auto`, `register`, `static`, `extern`

## 5) Arrays and Strings
- One-dimensional arrays
- Multi-dimensional arrays
- Passing arrays to functions
- C strings and null terminator (`'\0'`)
- String handling functions (`strlen`, `strcpy`, `strcat`, `strcmp`, etc.)

## 6) Pointers
- Pointer basics and declaration
- Address and dereference operators (`&`, `*`)
- Pointer arithmetic
- Pointers and arrays
- Pointers to pointers
- Function pointers
- `void*` generic pointers
- `const` with pointers

## 7) Structures, Unions, and Enums
- `struct` declaration and usage
- Nested structures
- Array of structures
- Pointers to structures (`->`)
- `typedef`
- `union`
- `enum`

## 8) Memory Management
- Static vs dynamic memory
- Dynamic allocation: `malloc`, `calloc`, `realloc`, `free`
- Memory leaks and dangling pointers

## 9) File Handling
- File pointers (`FILE*`)
- Opening/closing files (`fopen`, `fclose`)
- Reading/writing (`fscanf`, `fprintf`, `fgets`, `fputs`, `fread`, `fwrite`)
- File positioning (`fseek`, `ftell`, `rewind`)
- Error handling with files

## 10) Preprocessor and Compilation
- Macros (`#define`)
- Header files (`#include`)
- Conditional compilation (`#if`, `#ifdef`, `#ifndef`)
- Steps of compilation: preprocessing, compilation, assembly, linking

## 11) Advanced/Important Concepts
- Command line arguments (`argc`, `argv`)
- `volatile`, `restrict`, `inline`
- Bit fields
- Error handling (`errno`, `perror`)
- Assertions (`assert.h`)
- Modular programming and multiple source files
- Standard C libraries (`stdio.h`, `stdlib.h`, `string.h`, `math.h`, etc.)

## 12) Good Practices
- Write readable and modular code
- Validate input and handle errors
- Avoid buffer overflow (prefer `fgets` over unsafe functions like `gets` and careless `%s` `scanf` usage)
- Free dynamically allocated memory
- Use warnings and compiler flags (`-Wall -Wextra`)
