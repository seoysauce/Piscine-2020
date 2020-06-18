/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 12:39:44 by seojeong          #+#    #+#             */
/*   Updated: 2020/06/15 18:35:20 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

char	length(char str)
{
	int len;

	len = 0;
	while (str)
	{
		str++;
		len++;
	}
}

char	**find_char(char *str, char *charset)
{
	int i;
	int j;
	
	while (str[i] != '\0')
	{
		while (charset[j] != '\0')
		{
			
			j++;
		}
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int i;

	i = 0;
	str[]
}
