/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 15:02:27 by seojeong          #+#    #+#             */
/*   Updated: 2020/06/07 20:38:05 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(int len, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (i == j)
			{
				j++;
				continue;
			}
			if (base[i] == '+' || base[i] == '-')
				return (0);
			if (base[i] == 32 || (9 <= base[i] && base[i] <= 13))
				return (0);
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_minus(int minus, int result)
{
	if (minus % 2 == 0)
		return (result);
	else
		return ((-1) * result);
}

int	length(char *string)
{
	int len;

	len = 0;
	while (string[len])
		len++;
	return (len);
}

int	change_base(char *str, char *base, int i, int minus)
{
	int	result;
	int	j;
	int	base_len;

	base_len = length(base);
	result = 0;
	while (str[i])
	{
		j = 0;
		while (1)
		{
			if (str[i] == base[j])
			{
				result = (result * base_len) + j;
				break ;
			}
			if (base[j] == '\0')
				return (check_minus(minus, result));
			j++;
		}
		i++;
	}
	return (check_minus(minus, result));
}

int	ft_atoi_base(char *str, char *base)
{
	int base_len;
	int	i;
	int minus;

	base_len = length(base);
	if (base_len == 1 || base_len == 0)
		return (0);
	if (check_base(base_len, base) == 0)
		return (0);
	i = 0;
	minus = 0;
	while (str[i] == 32 || (9 <= str[i] && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	return (change_base(str, base, i, minus));
}
