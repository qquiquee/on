/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 10:02:25 by egiron-t          #+#    #+#             */
/*   Updated: 2021/05/07 15:47:38 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns a new list with the result of applying 
	a function to each element of a list 
*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*c;
	t_list	*p;
	t_list	*pnodo;

	p = 0;
	while (lst != NULL)
	{
		c = (*f)(lst->content);
		pnodo = ft_lstnew(c);
		if (pnodo == 0)
		{
			ft_lstclear(&p, del);
			return (0);
		}
		ft_lstadd_back(&p, pnodo);
		lst = lst->next;
	}
	return (p);
}
