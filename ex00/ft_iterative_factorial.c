int	ft_iterative_factorial(int nb)
{
	int	ret_val;

	if (nb < 0)
		return (0);
	ret_val = 1;
	while (nb > 0)
	{
		ret_val = ret_val * nb;
		nb--;
	}
	return (ret_val);
}
