/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:20:51 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:47:47 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns a pointer to the first position of the string 's'
	where the character 'c' appears if it is in the first 'n' position 
*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	vc;
	unsigned char	*ps;
	size_t			i;

	if (n == 0)
		return (NULL);
	else
	{
		vc = (unsigned char)c;
		ps = (unsigned char *) s;
		i = 0;
		while ((i < n) && (ps[i] != vc))
			i++;
		if (i == n)
			return (NULL);
		else
			return (&ps[i]);
	}
}
