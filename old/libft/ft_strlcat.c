/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 08:51:48 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:48:21 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  Concatenates two strings with a character limit and returns the size 
*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	unsigned int	j;
	size_t			len_total;

	i = ft_strlen(dst);
	len_total = ft_strlen(src);
	if (dstsize <= i)
		len_total = len_total + dstsize;
	else
		len_total = len_total + i;
	if (i < dstsize)
	{
		j = 0;
		while (src[j] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (len_total);
}
