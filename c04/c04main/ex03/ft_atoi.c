/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 21:53:13 by seojeong          #+#    #+#             */
/*   Updated: 2020/06/08 21:30:55 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_result(int i, int minus_count, char *str)
{
	int	result;

	result = 0;
	while (str[i])
	{
		if ('0' <= str[i] && str[i] <= '9')
			result = (result * 10) + (str[i] - '0');
		else
		{
			if (minus_count % 2 == 1)
				return ((-1) * result);
			else
				return (result);
		}
		i++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus_count;

	i = 0;
	minus_count = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	return (ft_result(i, minus_count, str));
}
