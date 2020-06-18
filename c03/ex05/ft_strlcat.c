/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 14:16:28 by seojeong          #+#    #+#             */
/*   Updated: 2020/06/06 22:04:16 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	length(char *str)
{
	unsigned int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = length(dest);
	src_len = length(src);
	if (size < dest_len)
		return (src_len + size);
	while (*dest != '\0')
	{
		dest++;
	}
	while (i + 1 + dest_len < size && src[i] != '\0')
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (dest_len + src_len);
}
