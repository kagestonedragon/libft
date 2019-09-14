# Libft

The aim of this project is to code a C library regrouping usual functions that you’ll be allowed to use in all your other projects.

### Libc functions

In this first part, you must re-code a set of the libc functions, as defined in their `man`.

* `memset`
* bzero
* memcpy
* memccpy
* memmove
* memchr
* memcmp
* strlen
* strdup
* strcpy
* strncpy
* strcat
* strnca
* strlcat
* strchr
* strrchr
* strstr
* strnstr
* strcmp
* strncmp
* atoi
* isalpha
* isdigit
* isalnum
* isascii
* isprint
* toupper
* tolower

### Additional functions

* `ft_memalloc` — allocates (with malloc(3)) and returns a “fresh” memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL.
Prototype: void ft_striter(char *s, void (*f)(char *));
* `ft_memdel` — takes as a parameter the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL.
* `ft_strnew` — allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’. Each character of the string is initialized at ’\0’. If the allocation fails the function returns NULL.
* `ft_strdel` — takes as a parameter the address of a string that need to be freed with free(3), then sets its pointer to NULL.
* `ft_strclr` — sets every character of the string to the value ’\0’.
* `ft_striter` — applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary. 
* `ft_striteri` — applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary.
* `ft_strmap` — applies the function f to each character of the string given as argument to create a “fresh” new string (with malloc(3)) resulting from the successive applications of f.
* `ft_strmapi` — applies the function f to each character of the string passed as argument by giving its index as first argument to create a “fresh” new string (with malloc(3)) resulting from the suc- cessive applications of f.
* `ft_strequ` — lexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1, or 0 otherwise.
* `ft_strnequ` — lexicographical comparison between s1 and s2 up to n characters or until a ’\0’ is reached. If the 2 strings are identical, the function returns 1, or 0 otherwise.
* `ft_strsub` — lexicographical comparison between s1 and s2 up to n characters or until a ’\0’ is reached. If the 2 strings are identical, the function returns 1, or 0 otherwise.
* `ft_strjoin` — allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’, result of the concatenation of s1 and s2. If the allocation fails the function returns NULL.
* `ft_strtrim` — allocates (with malloc(3)) and returns a copy of the string given as argument without whitespaces at the beginning or at the end of the string. Will be considered as whitespaces the following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces at the beginning or at the end, the function returns a copy of s. If the allocation fails the function returns NULL.
* `ft_strsplit` — allocates (with malloc(3)) and returns an array of “fresh” strings (all ending with ’\0’, including the array itself) obtained by spliting s using the character c as a delimiter. If the allocation fails the function returns NULL.
* `ft_itoa` — allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’ representing the integer n given as argument. Negative numbers must be supported. If the allocation fails, the function returns NULL.
* `ft_putchar` — outputs the character c to the standard output.
* `ft_putstr` — outputs the string s to the standard output.
* `ft_putendl` — outputs the string s to the standard output followed by a ’\n’.
* `ft_putnbr` — outputs the integer n to the standard output.
* `ft_putchar_fd` — outputs the char c to the file descriptor fd.
* `ft_putstr_fd` — outputs the string s to the file descriptor fd.
* `ft_putendl_fd` — outputs the string s to the file descriptor fd followed by a ’\n’.
* `ft_putnbr_fd` — outputs the integer n to the file descriptor fd.

