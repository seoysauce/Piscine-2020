/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 22:08:52 by seojeong          #+#    #+#             */
/*   Updated: 2020/06/11 22:45:13 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*newstr;
	int		srclen;
	int		i;

	srclen = 0;
	while (src[srclen] != 0)
	{
		srclen++;
	}
	newstr = (char *)malloc(sizeof(char) * srclen + 1);
	i = 0;
	while (src[i] != '\0')
	{
		newstr[i] = src[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
