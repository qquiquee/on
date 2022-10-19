/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:59:16 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:47:57 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns a pointer to destination where n source bytes have been copied 
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pd;
	unsigned char	*ps;
	size_t			i;

	if (len == 0)
		return (dst);
	else
	{
		if (dst == 0 && src == 0)
			return (NULL);
		i = 0;
		pd = (unsigned char *) dst;
		ps = (unsigned char *) src;
		if (dst <= src)
			while (i++ < len)
				*pd++ = *ps++;
		else
			while (i++ < len)
				pd[len - i] = ps[len - i];
		return (dst);
	}
}
