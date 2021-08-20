#include <unistd.h>

void	print_board(int board[10][10]);

int		solve(int board[10][10], int col, int sol);

int		check_constraints(int board[10][10], int row, int col);

int		check_diagonals(int board[10][10], int row, int col);

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	sol_count;
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = -1;
			j++;
		}
		i++;
	}
	sol_count = solve(board, 0, 0);
	return (sol_count);
}

int	solve(int board[10][10], int col, int sol)
{
	int	row;

	row = 0;
	if (col > 9)
	{
		print_board(board);
		sol++;
		return (sol);
	}
	while (row < 10)
	{
		if (check_constraints(board, row, col))
		{
			board[row][col] = row;
			sol = solve(board, col + 1, sol);
			board[row][col] = -1;
		}
		row++;
	}
	return (sol);
}

int	check_constraints(int board[10][10], int row, int col)
{
	int	c;
	int	r;

	r = 0;
	c = 0;
	while (r < 10 && c < 10)
	{
		if (r != row && board[r][col] != -1)
			return (0);
		if (c != col && board[row][c] != -1)
			return (0);
		r++;
		c++;
	}
	if (!check_diagonals(board, row, col))
		return (0);
	return (1);
}

int	check_diagonals(int board[10][10], int row, int col)
{
	int	c;
	int	r;

	c = 0;
	while (c < 10)
	{
		r = 0;
		while (r < 10)
		{
			if (r != row && (c - r == col - row || c + r == col + row))
			{
				if (board[r][c] != -1)
					return (0);
			}
			r++;
		}
		c++;
	}
	return (1);
}

void	print_board(int board[10][10])
{
	int		c;
	int		r;
	char	itoa;

	c = 0;
	while (c < 10)
	{
		r = 0;
		while (r < 10)
		{
			if (board[r][c] != -1)
			{
				itoa = board[r][c] + '0';
				write(1, &itoa, 1);
			}
			r++;
		}
		c++;
	}
	write(1, "\n", 1);
}
