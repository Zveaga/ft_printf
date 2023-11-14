# Printf
The goal of this project is to recode a simplified version of the 'printf' function in C.

## Key Concepts
- Variadic functions
- String manipulation
- Format specifiers

## How To Use
Clone the repository
```
git clone git@github.com:Zveaga/Printf.git
```
Move inside the Libft directory
```
cd Printf

```
Compile all files into a single static library named "libftprintf.a" which can be linked to other C projects.
```
make
```


## Approach
Ft_printf takes a string as its first argument ('const char *s'), after which it can take a variable number of arguments ('...') and outputs the formatted string to the standatd output.
The string to be formatted contains plain text and format specifiers.

Function prototype: ft_printf(const char *s, ...);

- Format specifiers are simple placeholders that indicate the type and format of the data that will be substituted in their place.
- The variable arguments denoted by three consecutive dots ('...') represent the values to be formated based on their associated format specifiers. 