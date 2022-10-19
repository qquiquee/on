#include "pipex.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	p = (char *)malloc(len + 1);
	if (p == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}


void	leaks(void)
{
	system("leaks pipex");
}

int main(int argc, char **argv, char **envp)
{
		atexit(leaks);
		char *path;
		printf("argv[0]q = %s\n", argv[1]);
		printf("argc = %i\n",argc);
// Sacar la variable PATH
		int i;
		i = 0;
		while (envp[i])
		{
			if (ft_strncmp(envp[i], "PATH", 4) == 0)
			{
				printf("PATH = %s\n",envp[i]);
				 path = ft_strdup(envp[i]);
				break;
			}
			i++;
		}

		printf("path = %s\n",path);
free(path);

		return (0);
}