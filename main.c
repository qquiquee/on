/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:27:15 by egiron-t          #+#    #+#             */
/*   Updated: 2022/07/22 19:52:49 by egiron-t         ###   ########.fr       */
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

int main(int argc, char **argv, char **envp)
{
	char **path;

	// atexit(leaks);

	if (argc == 5)
	{
		path = ft_envp_path(envp);

		printf("primer argumento: %s\n", argv[0]);
		printf("path primero: %s\n\n", path[0]);

		// printf("Primer path: %s\n", l_paths[0]);
		// Comprobamos el archivo de entrada
		// Comprobamos el archivo de salida
		ft_freearray(path);
	}
	else
	{
		ft_putstr_fd("Usage: ./pipex infile \"cmd1\" \"cmd2\" outfile\n", 2);
		exit(1);
	}
	return (0);
}
