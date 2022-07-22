/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:16:16 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:47:51 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Copy n bytes of memory from source to destination 
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;

	if (n == 0)
		return (dst);
	else
	{
		if (dst == 0 && src == 0)
			return (NULL);
		pd = (unsigned char *) dst;
		ps = (unsigned char *) src;
		while (n--)
			*pd++ = *ps++;
		return (dst);
	}
}
