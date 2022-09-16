/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 10:01:07 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:47:36 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Returns the last item in a list 
*/
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	len;

	len = ft_lstsize(lst);
	if (len == 0)
		return (lst);
	while (--len)
	{
		lst = lst->next;
	}
	return (lst);
}
