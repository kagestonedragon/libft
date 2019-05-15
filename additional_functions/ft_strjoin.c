#include <stdlib.h>
#include <string.h>
#include "../includes/libft.h"

char        *ft_strjoin(char const *s1, char const *s2)
{
	char    *join_result;
	char    *join_result_begin;
    size_t  size;

	if (!s1 || !s2)
		return (NULL);
    size = ft_strlen(s1) + ft_strlen(s2) + 1;
    if (!size)
        return (NULL);
	join_result = (char *)malloc(sizeof(char) * size);
	if (!join_result)
		return (NULL);
	join_result_begin = join_result;
	while (*s1)
		*join_result++ = *s1++;
	while (*s2 != '\0')
		*join_result++ = *s2++;
	*join_result = '\0';
	return (join_result_begin);
}
