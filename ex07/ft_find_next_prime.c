int	floor_sqrt(int x);

int	is_prime(int y);

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (is_prime(nb) == 0)
		nb++;
	return (nb);
}

int	is_prime(int nb)
{
	int	temp;

	temp = floor_sqrt(nb);
	while (temp > 1)
	{
		if ((nb % temp) == 0)
			return (0);
		temp--;
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
		if (((mid * mid) <= nb) && ((mid + 1) * (mid + 1) > nb))
			break ;
		else if ((mid * mid) > nb)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (mid);
}
