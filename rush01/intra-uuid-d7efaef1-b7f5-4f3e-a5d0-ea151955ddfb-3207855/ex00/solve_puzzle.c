/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_puzzle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sung-lee <sung-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 21:23:36 by sung-lee          #+#    #+#             */
/*   Updated: 2020/06/09 13:59:15 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve_puzzle.h"
#include "cond_check.h"
#include "cond_check2.h"
#include "functions.h"
#include "next_permu.h"
#include <unistd.h>
#include <stdlib.h>

int		g_once;

void	record_board(int **board, int row, int *val)
{
	int	idx;

	idx = 0;
	while (idx < g_max)
	{
		board[row][idx] = val[idx];
		++idx;
	}
	return ;
}

void	restore_board(int **board, int row)
{
	int	idx;

	idx = 0;
	while (idx < g_max)
	{
		board[row][idx] = 0;
		++idx;
	}
	return ;
}

void	print_board(int **board)
{
	int		row;
	int		col;
	char	ch;

	row = 0;
	col = 0;
	while (row < g_max)
	{
		while (col < g_max)
		{
			ch = board[row][col] + '0';
			write(1, &ch, 1);
			if (col != g_max - 1) // ?
				write(1, " ", 1);
			++col;
		}
		write(1, "\n", 1);
		col = 0;
		++row;
	}
	return ;
}

void	final_chk(int **board, int **cond, int row)
{
	while (row-- > 0)
	{
		if (!col_check(board, cond, row)) //col_check
			return ;
	}
	if (g_once == 0) //print 안되어 있는 상태 (g_once == 0)
		print_board(board);
	g_once = 1; //print 하고나면 g_once 1로 만들어줌
	return ;
}

void	solve_puzzle(int **board, int **cond, int row, int *val)
{
	int	*cur_val;

	if (row == g_max) //row == 4
	{
		final_chk(board, cond, row);
		return ;
	}
	cur_val = (int*)malloc(sizeof(int) * g_max);
	ft_strcpy(cur_val, val);
	while (1)
	{
		if (row_check(val, cond, row) == 1)
		{
			record_board(board, row, val);
			next_permu(val);
			solve_puzzle(board, cond, row + 1, val);
			restore_board(board, row);
		}
		else
			next_permu(val);
		if (ft_strcmp(cur_val, val) == 0)
			break ;
	}
	free(cur_val);
}
