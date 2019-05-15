#include <stdlib.h>
#include "../includes/libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	if (!s || !f)
		return (NULL);
	i = 0;
	new = ft_strnew(ft_strlen(s));
	if (!new)
		return (NULL);
	while (s[i])
    {
		new[i] = f(i, s[i]);
        i++;
    }
	return (new);
}
