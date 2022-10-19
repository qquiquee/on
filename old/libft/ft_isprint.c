/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 12:58:38 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 18:00:26 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns true if it receives a value (ASCII)
  that corresponds to a printable value */
#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	else
		return (0);
}
