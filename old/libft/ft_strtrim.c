/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 09:37:12 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 18:06:20 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Remove leading and trailing characters from a string 
*/
#include "libft.h"

int	ft_find(char const *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	len_s1;
	int		i;
	int		j;

	if (s1 == 0)
		return (0);
	len_s1 = ft_strlen(s1);
	if (set == 0)
		return ((char *)s1);
	i = 0;
	p = 0;
	while (s1[i] != '\0' && ft_find(set, s1[i]) == 1)
		    i++;
	if (s1[i] == '\0' || (len_s1 == 0))
	{
		p = (char *)malloc(1);
		*p = '\0';
		return (p);
	}
	j = len_s1 - 1;
	while ((i < j) && (ft_find(set, s1[j]) == 1))
		j--;
	p = ft_substr(s1, i, ((j + 1) - i));
	return (p);
}
