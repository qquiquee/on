/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 09:59:39 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:47:35 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Returns a list with each element modified by a function 
*/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int		len;
	t_list	*p;

	if (lst != NULL)
	{
		len = ft_lstsize(lst);
		p = lst;
		while (len)
		{
			(*f)(p->content);
			p = p->next;
			len--;
		}
	}	
}
