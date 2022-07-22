/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:27:15 by egiron-t          #+#    #+#             */
/*   Updated: 2022/07/22 15:29:22 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*ft_envp_path(char **envp, int argc)
{
	int	i;

	i = 0;
	while (envp != NULL)
	{
		if (ft_strncmp(envp[i], "PATH", 4) == 0)
			return (&envp[i][argc]);
		i++;
	}
	return (0);
}

void	ft_add_path(char **l_paths, char *argv, t_comm_path **aux_l, int pos)
{
	int			j;
	char		*aux;
	char		*aux_p;
	t_comm_path	*var;
	int			i;

	j = 0;
	i = -1;
	var = malloc(sizeof(t_comm_path));
	while (l_paths[j] != 0)
	{
		aux = ft_strjoin(l_paths[j], "/");
		aux_p = ft_strjoin(aux, argv);
		var->comm = ft_split(aux_p, ' ');
		var->next = 0;
		i = access(var->comm[0], X_OK);
		if (i == 0)
		{
			q_lstadd_back(aux_l, var);
			return ;
		}
		j++;
	}
	q_lstadd_back(aux_l, var);
	ft_error(pos, argv, var);
	free(var);
}

void	ft_setcommand(t_comm_path *var, char	*arg)
{
	var->comm = ft_split(arg, ' ');
	var->ok = 1;
	var->next = 0;
}

t_comm_path	**ft_accesslist(char **l_paths, char **argv, int argc)
{
	int			i;
	t_comm_path	**aux_l;
	t_comm_path	*var;
	int			co;

	i = 2;
	l_paths += 0;
	aux_l = malloc(sizeof(t_comm_path *));
	*aux_l = 0;
	while (i < argc - 1)
	{
		var = malloc(sizeof(t_comm_path));
		co = access(argv[i], X_OK);
		if (co == 0)
		{
			ft_setcommand(var, argv[i]);
			q_lstadd_back(aux_l, var);
		}
		else
			ft_add_path(l_paths, argv[i], aux_l, i);
		i++;
		free(var);
	}
	return (aux_l);
	free(aux_l);
}

void	leaks(void)
{
	system("leaks pipex");
}

int	main(int argc, char **argv, char **envp)
{	
	char		*path;
	char		**l_paths;
	t_comm_path	**comm_dir;
	int			fd;

	atexit(leaks);
	if (argc == 5)
	{
		path = ft_envp_path(envp, argc);
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			ft_file_error(argv[1]);
		close(fd);
		ft_open_outfile(argv[argc - 1]);
		l_paths = ft_split(path, ':');
		comm_dir = ft_accesslist(l_paths, argv, argc);
		ft_command_validation(comm_dir, argv);
		ft_first_part(comm_dir[0], envp, argv);
		ft_check_errors(comm_dir);
	}
	else
	{
		ft_putstr_fd("Usage: ./pipex infile \"cmd1\" \"cmd2\" outfile\n", 2);
		exit(1);
	}
	return (0);
}
