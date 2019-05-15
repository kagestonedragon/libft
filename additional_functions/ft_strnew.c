#include <stdlib.h>
#include "../includes/libft.h"

char	*ft_strnew(size_t size)
{
	char *result;

	if (!(size + 1))
		return (NULL);
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	ft_memset(result, '\0', (size + 1));
	return (result);
}
