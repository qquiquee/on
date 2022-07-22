/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 12:56:26 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:45:50 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns true if it receives a value (ASCII)
  that corresponds to a numeric value */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
