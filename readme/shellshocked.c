#include "shellshocked.h"

/**
 * main - Generates a simple shell
 * @argc: Number of arguements given
 * @argv: The arguements given
 *
 * Return: 0 on success
 */
int main(void)
{
	int num_char;
	size_t bsize;
	char *user_input;
	char *path;
	char *dir_name = NULL;
	int st = 0, count = 0;
	char **in_array = NULL;

	bsize = 1024;
	path = NULL;
	user_input = malloc(bsize);
	if (user_input == NULL)
	{
		perror("Your memory is shellshocked, unable to continue");
		exit(1);
	}
	path = turtle_path(environ);
	while (1)
	{
		if (user_input)
			free(user_input);
		user_input = malloc(bsize);
		printf("%s", prompt);
		num_char = getline(&user_input, &bsize, stdin);
		if (num_char  == -1)
		{
			perror("\n\nYou have been shellshocked and your session has ended!\n");
			free(user_input);
			exit(st);
		}
		in_array = malloc(sizeof(char *) * 10);
		count = turtle_surgery(user_input, in_array);
		if (count == 0)
		{
			printf("You didn't enter any commands");
			continue;
		}
		dir_name = turtle_or_not(path, in_array[0]);
		printf("dir_name = %s\n", dir_name);
		if (dir_name != NULL)
			turtle_cross_road_or_not(in_array, dir_name);
		st = 2;
		free(in_array);
	}
	if (user_input)
		free(user_input);
	free(path_name);
	return (0);
}
