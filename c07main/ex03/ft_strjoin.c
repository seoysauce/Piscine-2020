/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 20:36:04 by seojeong          #+#    #+#             */
/*   Updated: 2020/06/15 01:39:36 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strcat(char *new, char *dest, char *src)
{
	int		index;
	char	*p_new;

	index = 0;
	p_new = new;
	while (new[index] != '\0')
		index++;
	while (*dest)
	{
		new[index] = *dest;
		dest++;
		index++;
	}
	while (*src)
	{
		new[index] = *src;
		src++;
		index++;
	}
	new[index] = '\0';
	return (p_new);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*new;
	int		tot_len;
	int		sep_len;

	i = 0;
	tot_len = 0;
	if (size == 0)
	{
		new = (char *)malloc(0);
		return (new);
	}
	sep_len = length(sep);
	while (i < size)
		tot_len = tot_len + length(strs[i++]);
	new = (char *)malloc(sizeof(char) * (tot_len + 1) + (sep_len * (size - 1)));
	if (new == NULL)
		return (0);
	i = 0;
	while (i < size - 1)
		new = ft_strcat(new, strs[i++], sep);
	new = ft_strcat(new, strs[i], "\0");
	return (new);
}
