/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 14:08:48 by seojeong          #+#    #+#             */
/*   Updated: 2020/06/08 22:10:17 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	cal(int nb, char *base, int count)
{
	int	temp;

	if (nb >= count)
		cal((nb / count), base, count);
	temp = nb % count;
	write(1, &base[temp], 1);
}

int		length(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (i == j)
			{
				j++;
				continue;
			}
			if (base[i] == '+' || base[i] == '-')
				return (0);
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_len;

	base_len = length(base);
	if (base_len == 1 || base_len == 0)
		return ;
	else if (check_base(base) == 0)
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		cal(2147483648 / base_len, base, base_len);
		write(1, &base[2147483648 % base_len], 1);
	}
	else if (-2147483648 < nbr && nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * (-1);
		cal(nbr, base, base_len);
	}
	else if (0 <= nbr && nbr <= 2147483647)
		cal(nbr, base, base_len);
}
