#include "../includes/libft.h"
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	void	*result;

    if (!size)
        return (NULL);
	result = malloc(size);
	if (!result)
		return (NULL);
	ft_memset(result, 0, size);
	return (result);
}
