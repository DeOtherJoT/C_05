int	floor_sqrt(int nb);

int	ft_is_prime(int nb)
{
	int	max_check;

	if (nb <= 1)
		return (0);
	max_check = (int)floor_sqrt(nb);
	while (max_check > 1)
	{
		if (nb % max_check == 0)
			return (0);
		max_check--;
	}
	return (1);
}

int	floor_sqrt(int nb)
{
	long	start;
	long	end;
	long	mid;

	start = 1;
	end = nb;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if ((mid * mid) <= nb && (mid + 1) * (mid + 1) > nb)
			break ;
		else if ((mid * mid) > nb)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (mid);
}
