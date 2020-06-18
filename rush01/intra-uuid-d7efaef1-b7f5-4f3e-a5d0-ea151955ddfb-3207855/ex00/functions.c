/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sung-lee <sung-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 11:12:01 by sung-lee          #+#    #+#             */
/*   Updated: 2020/06/09 13:52:07 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	mv_pos(int *pos)
{
	if (pos[0] == g_max)
	{
		pos[0] = -1;
		pos[1] = -1;
	}
	if (pos[1] == g_max - 1)
	{
		++pos[0];
		pos[1] = 0;
	}
	else
		++pos[1];
	return ;
}

int		is_num(char ch)
{
	if (('0' <= ch) && (ch <= '9'))
		return (1);
	else
		return (0);
}

void	ft_strcpy(int *dest, int *src)
{
	int	idx;

	idx = 0;
	while (idx < g_max)
	{
		dest[idx] = src[idx];
		++idx;
	}
	return ;
}

int		ft_strcmp(int *s1, int *s2)
{
	int	idx;

	idx = 0;
	while (1)
	{
		if (idx == g_max)
			break ;
		if (s1[idx] > s2[idx])
			return (1);
		if (s1[idx] < s2[idx])
			return (-1);
		++idx;
	}
	return (0);
}
