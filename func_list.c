/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:12:22 by egiron-t          #+#    #+#             */
/*   Updated: 2022/07/21 16:23:02 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	q_lstadd_back(t_comm_path **lst, t_comm_path *new)
{
	if (new == NULL)
		return ;
	new->ok = 1;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
		q_lstlast(*lst)->next = new;
}

int	q_lstsize(t_comm_path *lst)
{
	int			i;
	t_comm_path	*s;

	if (lst == NULL)
		return (0);
	i = 0;
	s = lst;
	while (s != NULL)
	{
		i++;
		s = s->next;
	}
	return (i);
}

t_comm_path	*q_lstlast(t_comm_path *lst)
{
	int			i;
	t_comm_path	*ant;
	t_comm_path	*sig;

	if (lst == 0)
		return (0);
	i = 0;
	ant = lst;
	if (q_lstsize(lst) > 1)
	{
		sig = lst->next;
		while (sig != NULL)
		{
			ant = sig;
			sig = sig->next;
		}
	}
	return (ant);
}
