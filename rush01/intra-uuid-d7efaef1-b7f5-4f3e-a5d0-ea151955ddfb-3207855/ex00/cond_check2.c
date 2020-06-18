/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cond_check2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sung-lee <sung-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 22:09:12 by sung-lee          #+#    #+#             */
/*   Updated: 2020/06/07 23:11:54 by sung-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cond_check.h"

int	col_rep_check(int **board, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_max)
	{
		j = i + 1;
		while (j < g_max)
		{
			if (board[i][col] == board[j][col])
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

int	top_col_check(int **board, int col)
{
	int	i;
	int	count;
	int	col_g_max;

	i = 0;
	count = 0;
	col_g_max = 0;
	while (i < g_max)
	{
		if (col_g_max < board[i][col])
		{
			++count;
			col_g_max = board[i][col];
		}
		++i;
	}
	return (count);
}

int	up_col_check(int **board, int col)
{
	int	i;
	int	count;
	int	col_g_max;

	i = g_max - 1;
	count = 0;
	col_g_max = 0;
	while (i >= 0)
	{
		if (col_g_max < board[i][col])
		{
			++count;
			col_g_max = board[i][col];
		}
		--i;
	}
	return (count);
}

int	col_check(int **board, int **cond, int col)
{
	int	i;
	int	count;
	int	col_g_max;

	i = 0;
	count = 0;
	col_g_max = 0;
	if (!col_rep_check(board, col))
		return (0);
	count = top_col_check(board, col);
	if (cond[0][col] != count)
		return (0);
	count = up_col_check(board, col);
	if (cond[1][col] != count)
		return (0);
	return (1);
}
