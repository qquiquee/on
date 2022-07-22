/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:41:07 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:47:45 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	
*/
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	vc;
	unsigned char	*pd;
	unsigned char	*ps;
	size_t			i;

	if (dst == 0 && src == 0)
		return (NULL);
	vc = (unsigned char)c;
	pd = (unsigned char *) dst;
	ps = (unsigned char *) src;
	i = 0;
	while ((i < n) && (*ps != vc))
	{
		*pd++ = *ps++;
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		*pd = vc;
		pd++;
		return (pd);
	}
}
