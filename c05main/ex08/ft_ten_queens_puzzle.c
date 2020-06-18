/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 13:30:28 by seojeong          #+#    #+#             */
/*   Updated: 2020/06/11 17:52:28 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_arr(int *arr)
{
	int		i;
	char	n;

	i = 0;
	while (i < 10)
	{
		n = arr[i] + '0';
		write(1, &n, 1);
		i++;
	}
	write(1, "\n", 1);
}

int		check(int *loc, int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (loc[i] == loc[row] || loc[i] == loc[row] + (row - i)
		|| loc[i] == loc[row] - (row - i))
			return (0);
		i++;
	}
	return (1);
}

void	find_location(int *loc, int *count, int row)
{
	int	i;

	i = 0;
	if (row == 10)
	{
		print_arr(loc);
		(*count)++;
	}
	else
	{
		while (i < 10)
		{
			loc[row] = i;
			if (check(loc, row) == 1)
				find_location(loc, count, row + 1);
			i++;
		}
	}
}

int		ft_ten_queens_puzzle(void)
{
	int	loc[10];
	int	count;

	count = 0;
	find_location(loc, &count, 0);
	return (count);
}
