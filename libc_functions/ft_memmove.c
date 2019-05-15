#include <string.h>

void        *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t  i;

	if (!dst == !src)
		return (dst);
	i = 0;
	if ((unsigned char *)src < (unsigned char *)dst)
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	else
		while (i < len)
        {
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
            i++;
        }
	return (dst);
}
