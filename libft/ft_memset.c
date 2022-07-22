/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 19:23:44 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:47:59 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Returns a pointer with n positions filled with the received character 
*/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len--)
		*p++ = (unsigned char) c;
	return (b);
}
