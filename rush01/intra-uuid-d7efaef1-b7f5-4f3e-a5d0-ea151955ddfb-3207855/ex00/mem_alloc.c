/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sung-lee <sung-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 17:01:36 by sung-lee          #+#    #+#             */
/*   Updated: 2020/06/09 13:51:34 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem_alloc.h"
#include <stdlib.h>

int		**board_malloc(void)
{
	int	**board;
	int	i;

	board = (int**)malloc(sizeof(int*) * g_max); // int 4개 만큼 메모리 할당
	i = 0;
	while (i < g_max)
	{
		board[i] = (int*)malloc(sizeof(int) * g_max);
		++i;
	}
	return (board);
}

int		**cond_alloc(void)
{
	int	**cond;
	int i;

	cond = (int**)malloc(sizeof(int*) * 4);
	i = 0;
	while (i < g_max)
	{
		cond[i] = (int*)malloc(sizeof(int) * g_max);
		++i;
	}
	return (cond);
}

int		*permu_init(void)
{
	int *permu;
	int	i;

	permu = (int *)malloc(sizeof(int) * g_max);
	i = 0;
	while (i < g_max)
	{
		permu[i] = i + 1;
		++i;
	}
	return (permu);211
}
