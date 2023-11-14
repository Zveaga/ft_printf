# Printf
The goal of this project is to recode a simplified version of the `printf` function in C.

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

Prototype: `ft_printf(const char *s, ...);`

Printf is a variadic function that takes a string as its first argument ('const char *s'). After the string, it takes a variable number of arguments ('...') and displays the formatted string to the standatd output. The string to be formatted contains plain text and format specifiers.

- Format specifiers are simple placeholders that indicate the type and format of the data that will be substituted in their place.
- The variable arguments denoted by three consecutive dots ('...') represent the values to be formated based on their associated format specifiers.

Our version of printf must be able to format the following specifiers:

- %c -> print a single character
- %s -> print a string (as defined by the common C convention)
- %p -> print the address in hexadecimal format (lower case)
- %d -> print a decimal (base 10) number
- %i -> print an integer in base 10
- %u -> print an unsigned decimal (base 10) number
- %x -> print a number in hexadecimal (base 16) lowercase format
- %X -> print a number in hexadecimal (base 16) uppercase format
- %% -> print a percent sign

## Approach

1. Parse the input string 's'
2. Identify format specifiers ('%') and their associated values to be formatted ('...')
3. Format the values according to their format specifiers
4. Replace the format specifiers with their formatted values
5. Write the new string to the standard output

To be able to recode printf, we need to first understand how to work with variable arguments. We'll use the 'stdarg.h' library that comes with C. This library conains four macros that we are going to use: `va_list`, `va_start`, `va_arg`, `va_end`.
1. `va_list` holds information about the variable argument list. It is a pointer type. We initialize this at the begining.
2. `va_start` initializes the `va_list` to point to the first variable argument. We call this after initializing the `va_list` pointer.
4. `va_arg` retrieves the value of the the next variable argument. We use this function to advance to the next argument.
5. `va_end` cleans up the data associated with va_list. We call this at the end after all arguments have been processed.

Thus, when a format specifier is encountered in the string 's', we send it along with the `arg_pointer` to the [formats](https://github.com/Zveaga/Printf/blob/main/ft_printf.c) function. This function selects a formatting mechanism based on the format specifier. We use `va_arg` to retrieve the current argument and point to the next argument. We do this until string 's' has been fully parsed and all the variable arguments processed.


## Remarks





