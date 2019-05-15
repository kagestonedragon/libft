#include <stdlib.h>
#include "../includes/libft.h"

char        *ft_strdup(const char *s1)
{
	char    *duplicate;
	char    *dbegin;

    if (!(ft_strlen(s1) + 1))
        return (NULL);
	duplicate = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (duplicate == NULL)
		return (NULL);
	dbegin = duplicate;
	while (*s1 != '\0')
	{
		*duplicate = *s1;
		duplicate++;
		s1++;
	}
	*duplicate = '\0';
	return (dbegin);
}
