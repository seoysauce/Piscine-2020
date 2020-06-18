/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 14:16:20 by seojeong          #+#    #+#             */
/*   Updated: 2020/05/30 16:31:48 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
		putchar(nb + 48);
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		putchar(nb % 10 + '0');
	}
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
		ft_putnbr(nb);
	}
}
