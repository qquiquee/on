/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 09:41:05 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:52:41 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns a substring 
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	len_s;
	size_t	i;
	size_t	j;

	if ((s == 0) || (start < 0))
		return (0);
	len_s = ft_strlen(s);
	if (len_s <= len)
		p = (char *)malloc(sizeof(char) * (len_s + 1));
	else
		p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == 0)
		return (0);
	j = 0;
	if ((start < len_s) && (len > 0))
	{
		i = start;
		while ((i < len_s) && (i < (start + len)))
			p[j++] = s[i++];
	}
	p[j] = '\0';
	return (p);
}
