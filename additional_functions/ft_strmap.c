#include <stdlib.h>
#include "../includes/libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*new;

	if (!s || !f)
		return (NULL);
	i = -1;
	new = ft_strnew(ft_strlen(s));
	if (!new)
		return (NULL);
	while (s[++i])
		new[i] = f(s[i]);
	return (new);
}
