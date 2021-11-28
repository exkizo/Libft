# Libft
  This is my repository for the first project as a 42 studend. The goal here is to create a C library that will provide me with useful tools for future projects.


## Part 1 - Libc functions
  In this first part, you must re-code a set of the libc functions, as defined in their
manual. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be prefixed by “ft_”. For instance strlen becomes
ft_strlen.

### #Include `<ctype.h>`
* [`ft_isalpha`](Libft/libft/ft_isalpha.c)			- checks  for  an alphabetic character.
* [`ft_isdigit`](Libft/ft_isdigit.c)      - checks for a digit (0 through 9).
* [`ft_isalnum`](Libft/ft_isalnum.c)      - it is equivalent to (isalpha(c) || isdigit(c)).
* [`ft_isascii`](Libft/ft_isascii.c)      - checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
* [`ft_isprint`](Libft/ft_isprint.c)      -checks for any printable character including space.
* [`ft_memset`](Libft/ft_memset.c)        -fill memory with a constant byte
* [`ft_bzero`](Libft/ft_bzero.c)          -zero a byte string
* [`ft_tolower`](Libft/ft_tolower.c)      -convert uppercase letters to lowercase   
* [`ft_toupper`](Libft/ft_toupper.c)      -convert lowercase letters to uppercase

### #Include `<strings.h>`
* [`ft_strlen`](Libft/ft_strlen.c)        -calculate the length of a string
* [`ft_strlcpy`](Libft/ft_strlcpy.c)      -copy a string to a max of n elements
* [`ft_strlcat`](Libft/ft_strlcat.c)      -concatenates two string to a max of n elements
* [`ft_strrchr`](Libft/ft_strrchr.c)      -locate a character in a string
* [`ft_strncmp`](Libft/ft_strncmp.c)      -compares two strings
* [`ft_memchr`](Libft/ft_memchr.c)        -scan memory for a character
* [`ft_memcmp`](Libft/ft_memcmp.c)        -compare memory areas
* [`ft_memcpy`](Libft/ft_memcpy.c)        -copy memory area
* [`ft_memmove`](Libft/ft_memmove.c)      -copy memory area through a temporary array
* [`ft_strnstr`](Libft/ft_strlcpy.c)      -scan a string for another string

### #Include `<stdlib.h>`
* [`ft_atoi`](Libft/ft_atoi.c)            -convert character type to integer type
* [`ft_strdup`](Libft/ft_strdup.c)        -allocate memory for a given string using malloc
* [`ft_calloc`](Libft/ft_calloc.c)        -allocate memory of n size and fill with '\0'

## Part 2 - Additional functions
In this second part, you must code a set of functions that are either not included in the
libc, or included in a different form.

### String manipulation
* [`ft_substr`](Libft/ft_substr.c)        -allocates (with malloc(3)) and returns a substring from the string ’s’.
* [`ft_strjoin`](Libft/ft_strjoin.c)      -allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
* [`ft_strtrim`](Libft/ft_strtrim.c)      -allocates memory and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
* [`ft_split`](Libft/ft_split)            -allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.
* [`ft_itoa`](Libft/ft_itoa.c)            -allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
* [`ft_strmapi`](Libft/ft_strmapi.c)      -applies the function ’f’ to each character of the string ’s’ , and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.
* [`ft_striteri`](Libft/ft_striteri.c)    -applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary

### File descriptor
* [`ft_putchar_fd`](Libft/ft_putchar_fd) -Outputs the character ’c’ to the given file descriptor.             -
* [`ft_putstr_fd`](Libft/ft_putstr_fd.c) -Outputs the string ’s’ to the given file descriptor.
* [`ft_putendl_fd`](Libft/ft_putendl_fd.c) -Outputs the string ’s’ to the given file descriptor, followed by a newline.
* [`ft_putnbr_fd`](Libft/ft_putnbr_fd.c) -Outputs the integer ’n’ to the given file descriptor.

## Bonus Part - Linked list functions
* [`ft_lstadd_front`](Libft/ft_lstadd_front_bonus.c) -adds a new element in the list.
* [`ft_lstnew`](Libft/ft_lstnew_bonus.c) -adds a new element on the beginning of the list.
* [`ft_lstsize`](Libft/ft_lstsize_bonus.c) -counts the number of elements in a list.
* [`ft_lstlast`](Libft/ft_lstlast_bonus.c) -return the last element of the end of the list.
* [`ft_lstadd_back`](Libft/ft_lstadd_back_bonus.c) -adds a new element on the end of the list.
* [`ft_lstdelone`](Libft/ft_lstdelone_bonus.c) -delete an element of the list.
* [`ft_lstclear`](Libft/ft_lstclear_bonus.c) -delete an element of the list and every successor of that element.
* [`ft_lstiter`](Libft/ft_lstiter_bonus.c) -iterates the list ’lst’ and applies the function ’f’ to the content of each element.
* [`ft_lstmap`](Libft/ft_lstmap_bonus.c) -Iterates the list ’lst’ and applies the function ’f’ to the content of each element. creates a new list resulting of the successive applications of the function ’f’.



