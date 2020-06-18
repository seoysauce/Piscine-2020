/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 17:19:12 by seojeong          #+#    #+#             */
/*   Updated: 2020/05/29 12:10:41 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char input1, char input2, char input3)
{
	write(1, &input1, 1);
	write(1, &input2, 1);
	write(1, &input3, 1);
}

void	ft_print_comb(void)
{
	char a[3];

	a[0] = '0';
	a[1] = '0';
	a[2] = '0';
	while (a[0] <= '6')
	{
		while (a[1] <= '9')
		{
			while (a[2] <= '9')
			{
				if (a[0] < a[1] && a[1] < a[2])
				{
					ft_write(a[0], a[1], a[2]);
					write(1, ", ", 2);
				}
				a[2]++;
			}
			a[2] = '0';
			a[1]++;
		}
		a[1] = '0';
		a[0]++;
	}
	write(1, "789", 3);
}
