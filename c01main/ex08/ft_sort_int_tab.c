/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 20:10:18 by seojeong          #+#    #+#             */
/*   Updated: 2020/05/31 21:08:24 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int index;
	int times;

	index = 0;
	times = size - 1;
	while (times--)
	{
		while (index < size)
		{
			if (tab[index] > tab[index + 1])
			{
				temp = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = temp;
			}
			index++;
		}
		index = 0;
	}
}
