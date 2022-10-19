/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 00:55:25 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:48:18 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Returns a pointer to the memory allocated with the concatenation of two strings 
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len_s1;
	size_t	len_s2;
	size_t	j;

	if ((s1 == 0) || (s2 == 0))
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * ((len_s1 + len_s2) + 1));
	if (p == 0)
		return (0);
	j = 0;
	while (*s1 != '\0')
		p[j++] = *s1++;
	while (*s2 != '\0')
		p[j++] = *s2++;
	p[j] = '\0';
	return (p);
}
