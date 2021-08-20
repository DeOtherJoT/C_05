int	ft_sqrt(int nb)
{
	int		start;
	int		end;
	long	mid;

	if (nb > 0)
	{
		start = 1;
		end = nb;
		while (start <= end)
		{
			mid = (start + end) / 2;
			if ((mid * mid) == nb)
				return (mid);
			else if ((mid * mid) > nb)
				end = mid - 1;
			else
				start = mid + 1;
		}
	}
	return (0);
}
