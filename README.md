# Libft
  This is my repository for the first project as a 42 studend. The goal here is to create a C library that will provide me with useful tools for future projects.


## Part 1 - Libc functions
  In this first part, you must re-code a set of the libc functions, as defined in their
manual. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be prefixed by “ft_”. For instance strlen becomes
ft_strlen.

### #Include `<ctype.h>`
* [`ft_isalpha`](Libft/ft_isalpha.c)			- checks  for  an alphabetic character.
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

* [`ft_substr`](Libft/ft_substr.c)        -allocates (with malloc(3)) and returns a substring from the string ’s’.
* [`ft_strjoin`](Libft/ft_strjoin.c)      -Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
* [`ft_atoi`](Libft/ft_atoi.c)
* [`ft_atoi`](Libft/ft_atoi.c)
* [`ft_atoi`](Libft/ft_atoi.c)
* [`ft_atoi`](Libft/ft_atoi.c)
* [`ft_atoi`](Libft/ft_atoi.c)
* [`ft_atoi`](Libft/ft_atoi.c)
* [`ft_atoi`](Libft/ft_atoi.c)
* [`ft_atoi`](Libft/ft_atoi.c)
* [`ft_atoi`](Libft/ft_atoi.c)
