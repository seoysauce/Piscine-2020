/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 13:15:29 by seojeong          #+#    #+#             */
/*   Updated: 2020/06/05 11:37:00 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *find_p;
	char *str_p;

	find_p = to_find;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			str_p = str;
			while (*find_p != '\0')
			{
				if (*str_p != *find_p)
					break ;
				find_p++;
				str_p++;
			}
			if (*find_p == '\0')
				return (str);
			find_p = to_find;
		}
		str++;
	}
	return (0);
}
