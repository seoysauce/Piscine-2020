/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 15:04:52 by seojeong          #+#    #+#             */
/*   Updated: 2020/06/17 17:57:26 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int len;

	len = 0;
	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char				*ft_strdup(char *src)
{
	char	*ret;
	char	*ret_start;
	int		len;

	len = ft_strlen(src);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	ret_start = ret;
	while (*src != '\0')
		*(ret++) = *(src++);
	*ret = '\0';
	return (ret_start);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*ret;
	int					i;

	ret = (struct s_stock_str*)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (ret == NULL)
		return (ret);
	i = 0;
	while (i <= ac)
	{
		(ret + i)->size = (i == ac) ? 0 : ft_strlen(*(av + i));
		(ret + i)->str = (i == ac) ? 0 : *(av + i);
		(ret + i)->copy = (i == ac) ? 0 : ft_strdup(*(av + i));
		i++;
	}
	return (ret);
}
