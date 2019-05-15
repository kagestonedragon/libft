#include <stdlib.h>
#include "../includes/libft.h"

char        *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char    *substr;
	char    *substr_begin;

	if (!s)
		return (NULL);
	substr = ft_strnew(len);
	if (!substr)
		return (NULL);
	substr_begin = substr;
	while (len--)
		*substr++ = s[start++];
	*substr = '\0';
	return (substr_begin);
}
