/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_permu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sung-lee <sung-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 10:38:44 by sung-lee          #+#    #+#             */
/*   Updated: 2020/06/07 23:08:34 by sung-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "next_permu.h"

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		next_permu(int *val)
{
	int	i;
	int	j;

	i = g_max - 1; //i = 3 부터 시작
    while (i > 0 && val[i] <= val[i - 1]) //(i-1)항이 i항보다 크면 i--;
		--i;
	if (i <= 0) //i가 0이면 i항 값 = i + 1 ?
	{
		i = 0;
		while (i < g_max)
		{
			val[i] = i + 1;
			++i;
		}
		return (0);
	}
	j = g_max - 1;
	while (val[i - 1] >= val[j])
		--j;
	swap(&val[i - 1], &val[j]);
	j = g_max - 1;
	while (i < j)
		swap(&val[i++], &val[j--]);
	return (1);
}
