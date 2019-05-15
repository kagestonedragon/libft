#include <stdio.h>

char    *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i])
	{
		while ((haystack[i + j] == needle[j]) && needle[j])
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
		j = 0;
	}
	return (NULL);
}
