/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 01:15:56 by seojeong          #+#    #+#             */
/*   Updated: 2020/06/18 13:00:28 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int		is_sep(char ch, char *charset)
{
	int i;

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
	int cnt;
	int flag;
	int i;

	i = 0;
	cnt = 0;
	flag = 0;
	while (str[i])
	{
		if (flag == 0 && (is_sep(str[i], charset) == 0))
		{
			flag = 1;
			str++;
			cnt++;
		}
		if (is_sep(str[i], charset) == 1)
			flag = 0;
		i++;
	}
	return (cnt);
}

int		char_count(char *str, char *charset)
{
	int cnt;

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
	int		word_cnt;
	int		char_cnt;
	char	**arr;

	i = 0;
	word_cnt = word_count(str, charset);
	arr = (char **)malloc(sizeof(char*) * (word_cnt + 1));
	arr[word_cnt] = NULL;
	while (i < word_cnt)
	{
		if ((char_cnt = char_count(str, charset)) != 0)
		{
			arr[i] = (char *)malloc(sizeof(char) * (char_cnt + 1));
			j = 0;
			while (*str && (is_sep(*str, charset) == 0))
				arr[i][j++] = *str++;
			arr[i][j] = '\0';
			i++;
		}
		else
			str++;
	}
	return (arr);
}
