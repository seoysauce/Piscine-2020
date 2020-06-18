/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 20:57:08 by seojeong          #+#    #+#             */
/*   Updated: 2020/05/30 21:44:15 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(char c)
{
	

}

void	ft_print_combn(char n)
{
	while (n > 0 && n < 10)
	{
	if (r / 10 < r % 10)
		putchar();
	}
}

void	digit(char n)
{
	int i;

	i = 0;
	while (n)
	{
		i *= 10;
	}
}

int		main(void)
{
	ft_print_combn(3);
}
