/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 09:02:44 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:48:23 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  Copy one string into another with a character limit and return the size 
*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			srclen;
	unsigned int	i;

	if (dst == 0 && src == 0)
		return (0);
	srclen = ft_strlen(src);
	if (dstsize > 0)
	{
		i = 0;
		while ((i < srclen) && (i < (dstsize - 1)))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}
