/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 00:49:29 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:48:16 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 	Returns a pointer to allocated memory with copy of a string 
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	p = (char *)malloc(len + 1);
	if (p == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
