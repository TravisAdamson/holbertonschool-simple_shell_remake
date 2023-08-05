#include "shellshocked.h"

/**
 * turtle_cross_road_or_not - launches input command with its arguments
 * @input: The command to be executed.
 * @argv: The arguments to the command.
 * Return: void
 */
void turtle_cross_road_or_not(char **argv, char *dir_name)
{
	pid_t launch = 0;
	int status = 0;
	char *full_path;
	char **envp = NULL;
	char *d_name = "\0";

	if (dir_name != NULL)
		d_name = dir_name;
	full_path = malloc(strlen(d_name) + strlen(argv[1]) + 2);
	full_path[0] = '\0';
	strcat(full_path, d_name);
	strcat(full_path, "/");
	strcat(full_path, argv[1]);
	argv[1] = strdup(full_path);
	free(full_path);
	launch = fork();
	if (launch == -1)
	{
		perror(argv[1]), exit(EXIT_FAILURE);
	}
	else if (launch == 0)
	{
		if (execve(argv[1], argv, envp) == -1)
		{
			perror(argv[1]), exit(EXIT_FAILURE);
		}
	}
	else
		wait(&status);
	free(argv[1]);
}
