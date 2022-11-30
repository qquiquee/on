/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:27:15 by egiron-t          #+#    #+#             */
/*   Updated: 2022/11/11 10:06:55 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void leaks(void)
{
	system("leaks pipex");
}

char **ft_envp_path(char **envp)
{
	int i;

	i = 0;
	while (envp != NULL)
	{
		if (ft_strncmp(envp[i], "PATH", 4) == 0)
			return ft_split(&envp[i][0], ':');
		i++;
	}
	return (0);
}

// void	ft_first_child(char **argv, int fd1[2], t_comm_path *act, char **envp)
// {
// 	int	fd;

// 	close(fd1[0]);
// 	fd = open(argv[1], O_RDONLY);
// 	if (fd < 0)
// 		exit (0);
// 	ft_infile(fd, fd1);
// 	if (execve(act->comm[0], act->comm, envp) < 0)
// 		exit (127);
// }

int main(int argc, char **argv, char **envp)
{
	char **path;

int			fd; 
 atexit(leaks);

	if (argc == 5)
	{
		path = ft_envp_path(envp);

		// Comprobamos el archivo de entrada
 		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			ft_file_error(argv[1]);
		close(fd);
		// Comprobamos el archivo de salida
		ft_open_outfile(argv[argc - 1]);
	

		printf("Primer comando: %s\nSegundo comando %s\n\n", argv[2], argv[3]);
		char *comando = "touch";
		char *argus[] = {comando, "WWWW", NULL};
		char *env[] = {"PORT=8080", NULL};
        execve(comando, argus, env);

// ft_first_child(argv[2], fd1, act, envp);

		ft_freearray(path);
	}
	else
	{
		ft_putstr_fd("Usage: ./pipex infile \"cmd1\" \"cmd2\" outfile\n", 2);
		exit(1);
	}
	return (0);
}
