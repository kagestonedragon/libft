int		ft_fibonacci(int nb)
{
	if (nb > 1)
		return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));
	else if (nb == 1)
		return (1);
	else if (nb == 0)
		return (0);
	else
		return (-1);
}
