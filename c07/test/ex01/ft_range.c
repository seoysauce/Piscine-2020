/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 22:35:42 by seojeong          #+#    #+#             */
/*   Updated: 2020/06/13 20:16:40 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int i;
	int *arr;

	i = 0;
	range = max - min;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * range);
	while (i < range)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
