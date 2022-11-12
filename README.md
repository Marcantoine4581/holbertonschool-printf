<p align="center">
<img src="https://user-images.githubusercontent.com/113547513/200679698-7dd24f94-1616-4c1f-849c-d8493a6d97f3.png" width="220" height="280">



# _printf

_printf is a function to do formatted printing. In this program we develop the function for simple printing and the format specificatrions printing.

## Return value

Upon successful return, these functions return the number of characters printed (excluding the null byte used to end output to strings).

If an output error is encountered, a negative value is returned.

## Mandatory Tasks

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Write a function that produces output according to a format.

- Prototype: int _printf(const char *format, ...);
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- write output to stdout, the standard output stream
- format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need 
   to handle the following conversion specifiers:
    
   | Specifier | Output                                                                  | Example     |
   |-------    | ----------------------------------------------------------------------- |------       |
   | c         | Character                                                               | A           |
   | s         | String of characters                                                    | Best School |
   | %         | A % followed by another % character will write a single % to the stream | %           |
   
1. Education is when you read the fine print. Experience is what you get if you don't

- Handle the following conversion specifiers:

   | Specifier | Output                                                                  | Example     |
   | --------- | ------                                                                  | -------     |
   | i and d   | Signed decimal integer                                                  | 89          |

2. Just because it's in print doesn't mean it's the gospel

- Create a man page for your function.

## Advanced Tasks

Add more specifiers

## Examples

Character: _printf("%c", 'B');  Output: B

String: _printf("%s", 'Holberton Best School'); Output: Holberton Best School

Integer: _prinf("%i", '3'); Output: 3
   
```c
#include "main.h"
/**
 * main - main function of program
 * Return: always 0
 */
int main(void)
{
	int num;
	char *string;
	
	num = 1;
	string = "Holberon is"
	_printf("%s number %i.\n", string, num);
	return (0);
}
```
```{bash}
linuxuser>$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -Wno-format *.c -o example_program
linuxuser>$  ./example_program
Holberton is number 1.
linuxuser>$
```
## Project Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS
- Your programs and functions will be compiled with gcc using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style.
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called holberton.h
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project

## Flowchart

![Flowchart  drawio (1)](https://user-images.githubusercontent.com/113547513/201141230-e7915e75-6f9a-4082-9426-19dd62674d06.png)

## MADE BY

 @**MARC-ANTOINE VANNIER**

 @**DINU MIRA**
