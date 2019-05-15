#include <unistd.h>
#include "../includes/libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (!s)
		return ;
    write(fd, s, ft_strlen(s));
}
