#include <string.h>

void                *ft_memset(void *b, int c, size_t len)
{
	unsigned char   *ch;

	ch = (unsigned char *)b;
	while (len--)
		*ch++ = (unsigned char)c;
	return (b);
}
