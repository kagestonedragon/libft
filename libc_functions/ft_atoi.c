int				ft_atoi(const char *str)
{
	int			negative;
	long long	result;
	long long	temp;

	negative = 1;
	result = 0;
	while (*str != '\0' && (*str == ' ' || *str == '\t' ||
	*str == '\r' || *str == '\n' || *str == '\f' || *str == '\v'))
		str++;
	if (*str == '-')
		negative = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		temp = (result * 10) + (*str++ - '0');
		if (result > temp)
		{
			if (negative == 1)
				return (-1);
			return (0);
		}
		result = temp;
	}
	return ((int)(result * negative));
}
