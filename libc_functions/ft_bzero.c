#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char *ch;

	ch = (char *)s;
	while (n--)
		*ch++ = 0;
}
