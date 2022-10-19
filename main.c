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

void	leaks(void)
{
	system("leaks pipex");
}

char	*ft_envp_path(char **envp)
{
	int	i;

	i = 0;
	while (envp != NULL)
	{
		if (ft_strncmp(envp[i], "PATH", 4) == 0)
			return (&envp[i][0]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv, char **envp)
{	
 	char		*path;
	// char		**l_paths;
	

	// atexit(leaks);

	if (argc == 5)
	{
		// Buscamos en envp la variable PATH
		path = ft_envp_path(envp);
		// Separamos el path en un array de strings
		// l_paths = ft_split(path, ':');
	printf("Primer Argumento: %s\nPrimera variable de entorno: %s\n", argv[1],envp[0]);
			printf("path completo: %s\n", path);

		// printf("Primer path: %s\n", l_paths[0]);


		// Comprobamos el archivo de entrada
		// Comprobamos el archivo de salida
		
	}
	else
	{
		ft_putstr_fd("Usage: ./pipex infile \"cmd1\" \"cmd2\" outfile\n", 2);
		exit(1);
	}
	return (0);
}
