/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cond_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sung-lee <sung-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 15:41:57 by sung-lee          #+#    #+#             */
/*   Updated: 2020/06/09 15:09:29 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cond_check.h"

int		left_row_check(int *row)
{
	int i;
	int count;
	int row_max;

	i = 0;
	count = 0;
	row_max = 0;
	while (i < g_max) // i < 4
	{
		if (row_max < row[i]) //row_max(==0)가 i항보다 작으면
		{
			++count;
			row_max = row[i];
		}
		++i;
	}
	return (count);
}

int		right_row_check(int *row)
{
	int	i;
	int	count;
	int	row_max;

	row_max = 0;
	i = g_max - 1;
	count = 0;
	while (i >= 0)
	{
		if (row_max < row[i])
		{
			++count;
			row_max = row[i];
		}
		--i;
	}
	return (count);
}

int		row_check(int *row, int **cond, int row_pos)
{
	int	count;

	count = left_row_check(row);
	if (cond[2][row_pos] != count)
		return (0);
	count = right_row_check(row);
	if (cond[3][row_pos] != count)
		return (0);
	return (1);
}
