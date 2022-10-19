/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:28:25 by egiron-t          #+#    #+#             */
/*   Updated: 2022/07/21 16:28:30 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_open_infile(char *arc)
{
	int	fd;

	fd = open(arc, O_RDONLY);
	if (fd < 0)
		ft_file_error(arc);
	close(fd);
	exit (0);
}

void	ft_open_outfile(char *arc)
{
	int	fd;

	fd = open(arc, O_CREAT | O_WRONLY, 0666);
	close(fd);
}
