/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 09:28:51 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:48:34 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Find the last occurrence of a character in a string 
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ps;
	size_t	len_s;

	ps = (char *)s;
	len_s = ft_strlen(s);
	if ((len_s > 0) && (c != '\0'))
	{
		ps = ps + (len_s - 1);
		while (len_s > 0)
		{
			if (*ps == (char)c)
				return (ps);
			len_s--;
			ps--;
		}
	}
	if (c == '\0')
		return (ps + len_s);
	return (0);
}
