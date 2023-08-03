#include "shellshocked.c"

char *get_env(char **environ)
{
	char **env = environ;
	char *temp = NULL;
	int index = 0;

	while (env[index] != NULL)
	{
		if (strncmp(env[index], name, strlen(name)) == 0)
		{
			temp = strchr(env[index], '=') +1;
			return (temp);
		}
		index++;
	}
	return (NULL);
}

int print_env(char **environ)
{
	char *env2 = environ;
	int index = 0;

	while (env[index] != NULL)
	{
		printf("%s\n", env[index]);
		index++;
	}
	return (0);
}

