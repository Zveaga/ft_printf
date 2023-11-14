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


## The function
Printf is a variadic function that takes a string as its first argument ('const char *s'). After the string, it takes a variable number of arguments ('...') and displays the formatted string to the standatd output. The string to be formatted contains plain text and format specifiers.

Function prototype: ft_printf (const char *s, ...);

- Format specifiers are simple placeholders that indicate the type and format of the data that will be substituted in their place.
- The variable arguments denoted by three consecutive dots ('...') represent the values to be formated based on their associated format specifiers.


## Approach

1. Parse the input string 's'
2. Identify format specifiers ('%') and their associated values to be formatted ('...')
3. Format the values according to their format specifiers
4. Replace the format specifiers with their formatted values
5. Write the new string to the standard output

To be able to recode printf, we need to first understand how to work variable arguments. We'll use the 'stdarg.h' library that comes with C. This library conains four macros that we are going to use:
- va_list
- va_start
- va_arg
- va_end








