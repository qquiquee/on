/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:26:46 by egiron-t          #+#    #+#             */
/*   Updated: 2022/07/21 16:31:05 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "libft/libft.h"
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/errno.h>
# include <errno.h>

# define COLOR_RESET	"\033[0;39m"
# define COLOR_GRAY		"\033[0;90m"
# define COLOR_RED		"\033[0;91m"
# define COLOR_GREEN	"\033[0;92m"
# define COLOR_YELLOW	"\033[0;93m"
# define COLOR_BLUE		"\033[0;94m"
# define COLOR_MAGENTA	"\033[0;95m"
# define COLOR_CYAN		"\033[0;96m"
# define COLOR_WHITE	"\033[0;97m"

// main.c
void	leaks(void);
char	**ft_paths(char **envp, int argc);
// void	ft_first_child(char **argv, int fd1[2], t_comm_path *act, char **envp);


// files.c
void	ft_file_error(char *str);
void	ft_open_infile(char *arc);
void	ft_open_outfile(char *arc);

// commands.c
// char	**ft_arraycommands(char **argv);





#endif
