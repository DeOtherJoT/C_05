int	ft_iterative_power(int nb, int power)
{
	int	ret_val;

	ret_val = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		ret_val *= nb;
		power--;
	}
	return (ret_val);
}
