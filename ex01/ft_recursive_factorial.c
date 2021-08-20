int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
		return (ft_recursive_factorial(nb - 1) * nb);
	else if (nb < 0)
		return (0);
	return (1);
}
