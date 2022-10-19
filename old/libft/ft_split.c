/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 00:36:45 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 20:13:46 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 	Returns an array with the substrings resulting from splitting a
 	received string with a received character 
 */

#include "libft.h"

int	ft_cuantos(char const *s1, char c1)
{
	int	a;
	int	b;

	if (ft_strlen(s1) == 0)
		return (0);
	a = 0;
	b = 1;
	while (s1[b] != '\0')
	{
		if ((s1[b] == c1) && (s1[b - 1] != c1))
			a++;
		b++;
	}
	if (s1[b - 1] != c1)
		a = a + 1;
	return (a);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	char		**p;
	char		*puno;

	if (s == 0)
		return (0);
	p = (char **) malloc((ft_cuantos(s, c) + 1) * sizeof(char *));
	if (p == 0)
		return (0);
	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			puno = (char *)s;
			while ((*s != c) && (*s != '\0'))
				s++;
			p[i] = ft_substr(puno, 0, (s - puno));
			i++;
		}
	}
	p[i] = NULL;
	return (p);
}
