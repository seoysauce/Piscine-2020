/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 13:37:28 by seojeong          #+#    #+#             */
/*   Updated: 2020/06/18 13:54:02 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int		is_sep(char ch, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (ch == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		word_count(char *str, char *charset)
{
	int	i;
	int	flag;
	int	cnt;

	i = 0;
	flag = 1;
	cnt = 0;
	while (str[i])
	{
		if (flag == 1 && (is_sep(str[i], charset) == 0))
		{
			cnt++;
			flag = 0;
		}
		if (is_sep(str[i], charset) == 1)
			flag = 1;
		i++;
	}
	return (cnt);
}

int		char_count(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	while (*str && (is_sep(*str, charset) == 0))
	{
		cnt++;
		str++;
	}
	return (cnt);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**new;
	int		wdcnt;
	int		wdlen;

	i = 0;
	wdcnt = word_count(str, charset);
	new = (char**)malloc((wdcnt + 1) * sizeof(char*));
	new[wdcnt] = NULL;
	while (i < wdcnt)
	{
		if ((wdlen = char_count(str, charset)) != 0)
		{
			new[i] = (char*)malloc((wdlen + 1) * sizeof(char));
			j = 0;
			while (*str && (is_sep(*str, charset) == 0))
				new[i][j++] = *str++;
			new[i++][j] = '\0';
		}
		else
			str++;
	}
	return (new);
}
