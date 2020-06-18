/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 18:12:16 by seojeong          #+#    #+#             */
/*   Updated: 2020/06/13 20:35:16 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int bound;
	int i;

	i = 0;
	bound = max - min;
	if (bound <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * bound);
	if (*range == NULL)
		return (-1);
	while (i < bound)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (bound);
}
