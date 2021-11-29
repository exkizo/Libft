# Libft
  This is my repository for the first project as a 42 studend. The goal here is to create a C library that will provide me with useful tools for future projects.


## Part 1 - Libc functions
  In this first part, you must re-code a set of the libc functions, as defined in their
manual. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be prefixed by “ft_”. For instance strlen becomes
ft_strlen.

### #Include `<ctype.h>`
* [`ft_isalpha`](libft/ft_isalpha.c)			- checks  for  an alphabetic character.
* [`ft_isdigit`](libft/ft_isdigit.c)      - checks for a digit (0 through 9).
* [`ft_isalnum`](libft/ft_isalnum.c)      - it is equivalent to (isalpha(c) || isdigit(c)).
* [`ft_isascii`](libft/ft_isascii.c)      - checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
* [`ft_isprint`](libft/ft_isprint.c)      -checks for any printable character including space.
* [`ft_memset`](libft/ft_memset.c)        -fill memory with a constant byte
* [`ft_bzero`](libft/ft_bzero.c)          -zero a byte string
* [`ft_tolower`](libft/ft_tolower.c)      -convert uppercase letters to lowercase   
* [`ft_toupper`](libft/ft_toupper.c)      -convert lowercase letters to uppercase

### #Include `<strings.h>`
* [`ft_strlen`](libft/ft_strlen.c)        -calculate the length of a string
* [`ft_strlcpy`](libft/ft_strlcpy.c)      -copy a string to a max of n elements
* [`ft_strlcat`](libft/ft_strlcat.c)      -concatenates two string to a max of n elements
* [`ft_strrchr`](libft/ft_strrchr.c)      -locate a character in a string
* [`ft_strncmp`](libft/ft_strncmp.c)      -compares two strings
* [`ft_memchr`](libft/ft_memchr.c)        -scan memory for a character
* [`ft_memcmp`](libft/ft_memcmp.c)        -compare memory areas
* [`ft_memcpy`](libft/ft_memcpy.c)        -copy memory area
* [`ft_memmove`](libft/ft_memmove.c)      -copy memory area through a temporary array
* [`ft_strnstr`](libft/ft_strlcpy.c)      -scan a string for another string

### #Include `<stdlib.h>`
* [`ft_atoi`](libft/ft_atoi.c)            -convert character type to integer type
* [`ft_strdup`](libft/ft_strdup.c)        -allocate memory for a given string using malloc
* [`ft_calloc`](libft/ft_calloc.c)        -allocate memory of n size and fill with '\0'

## Part 2 - Additional functions
In this second part, you must code a set of functions that are either not included in the
libc, or included in a different form.

### String manipulation
* [`ft_substr`](libft/ft_substr.c)        -allocates (with malloc(3)) and returns a substring from the string ’s’.
* [`ft_strjoin`](libft/ft_strjoin.c)      -allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
* [`ft_strtrim`](libft/ft_strtrim.c)      -allocates memory and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
* [`ft_split`](libft/ft_split.c)            -allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.
* [`ft_itoa`](libft/ft_itoa.c)            -allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
* [`ft_strmapi`](libft/ft_strmapi.c)      -applies the function ’f’ to each character of the string ’s’ , and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.
* [`ft_striteri`](libft/ft_striteri.c)    -applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary

### File descriptor
* [`ft_putchar_fd`](libft/ft_putchar_fd) -Outputs the character ’c’ to the given file descriptor.             -
* [`ft_putstr_fd`](libft/ft_putstr_fd.c) -Outputs the string ’s’ to the given file descriptor.
* [`ft_putendl_fd`](libft/ft_putendl_fd.c) -Outputs the string ’s’ to the given file descriptor, followed by a newline.
* [`ft_putnbr_fd`](libft/ft_putnbr_fd.c) -Outputs the integer ’n’ to the given file descriptor.

## Bonus Part - Linked list functions
* [`ft_lstadd_front`](libft/ft_lstadd_front.c) -adds a new element in the list.
* [`ft_lstnew`](libft/ft_lstnew.c) -adds a new element on the beginning of the list.
* [`ft_lstsize`](libft/ft_lstsize.c) -counts the number of elements in a list.
* [`ft_lstlast`](libft/ft_lstlast.c) -return the last element of the end of the list.
* [`ft_lstadd_back`](libft/ft_lstadd_back.c) -adds a new element on the end of the list.
* [`ft_lstdelone`](libft/ft_lstdelone.c) -delete an element of the list.
* [`ft_lstclear`](libft/ft_lstclear.c) -delete an element of the list and every successor of that element.
* [`ft_lstiter`](libft/ft_lstiter.c) -iterates the list ’lst’ and applies the function ’f’ to the content of each element.
* [`ft_lstmap`](libft/ft_lstmap.c) -Iterates the list ’lst’ and applies the function ’f’ to the content of each element. creates a new list resulting of the successive applications of the function ’f’.



