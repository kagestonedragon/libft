int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (!power)
		return (1);
	else
    {
        if (nb % 2 == 0)
            return (nb * nb * ft_recursive_power(nb, power - 2));
        return (nb * ft_recursive_power(nb, power - 1));
    }
        
}
