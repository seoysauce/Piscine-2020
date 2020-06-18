/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 18:50:11 by seojeong          #+#    #+#             */
/*   Updated: 2020/05/31 20:42:16 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int index;

	index = 0;
	while (index < size / 2)
	{
		temp = tab[index];
		tab[index] = tab[size - index - 1];
		tab[size - index - 1] = temp;
		index++;
	}
}
