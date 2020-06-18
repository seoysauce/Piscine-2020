/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 12:09:24 by seojeong          #+#    #+#             */
/*   Updated: 2020/06/02 17:10:03 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a)
{
	write(1, &a, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hexdec;
	int				n;
	unsigned char	*ustr;

	i = 0;
	hexdec = "0123456789abcdef";
	ustr = (unsigned char *)str;
	while (ustr[i] != '\0')
	{
		if (ustr[i] < 32 || ustr[i] > 126)
		{
			n = ustr[i];
			print(92);
			print(hexdec[n / 16]);
			print(hexdec[n % 16]);
		}
		else
			print(ustr[i]);
		i++;
	}
}
