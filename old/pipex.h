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

//Commands list
typedef struct s_comm_path
{
	char				**comm;
	int					ok;
	struct s_comm_path	*next;
}	t_comm_path;

//ft_files.c
void			ft_open_infile(char *arc);
void			ft_open_outfile(char *arc);

//ft_error_func.c
void			ft_file_error(char *str);
void			ft_comm_error(char *str, t_comm_path *var);
void			ft_check_errors(t_comm_path **comm_dir);
void			ft_command_validation(t_comm_path **comm_dir, char **argv);
void			ft_error(int pos, char *argv, t_comm_path *var);

// main.c
t_comm_path		**ft_accesslist(char **l_paths, char **argv, int argc);
char			*ft_envp_path(char **envp, int argc);
void			ft_add_path(char **l_paths, char *argv,
					t_comm_path **aux_l, int pos);
void			ft_valid_direction(t_comm_path	**comm_dir, char **argv);

// func_list
void			q_lstadd_back(t_comm_path **lst, t_comm_path *new);
int				q_lstsize(t_comm_path *lst);
t_comm_path		*q_lstlast(t_comm_path *lst);

// ft_first_command.c
void			ft_first_child(char **argv, int fd1[2],
					t_comm_path *act, char **envp);
void			ft_second_part(t_comm_path *act, int *fd1,
					char **argv, char **envp);
void			ft_first_part(t_comm_path *act, char **envp, char **argv);
void			ft_infile(int fd, int fd1[2]);

#endif
