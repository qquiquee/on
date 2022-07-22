/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 12:44:34 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 18:00:04 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns true if it receives a value (ASCII) that corresponds
  to a alphabet letter */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
