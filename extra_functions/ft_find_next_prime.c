int		ft_find_next_prime(int nb)
{
	int i;

	i = 1;
	if (nb < 2)
		return (2);
	while (++i < nb)
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
	return (nb);
}
