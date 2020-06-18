/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 22:18:09 by seojeong          #+#    #+#             */
/*   Updated: 2020/06/06 22:18:11 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb > -2147483648)
	{
		nb = nb * -1;
		write(1, "-", 1);
		ft_putnbr(nb);
	}
	else if (nb >= 0 && nb < 10)
	{
		put_char(nb + '0');
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		put_char(nb % 10 + '0');
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
}
