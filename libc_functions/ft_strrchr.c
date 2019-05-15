#include "../includes/libft.h"

char        *ft_strrchr(const char *s, int c)
{
	char    *last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			last = (char *)s;
		}
		s++;
	}
	if (!(*s) && !((char)c))
		return ((char *)s);
	else
		return (last);
}
