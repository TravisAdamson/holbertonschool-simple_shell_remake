#include "shellshocked.h"

/**
 * main - Generates a simple shell
 * @argc: Number of arguements given
 * @argv: The arguements given
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num_char;
	size_t bsize;
	char *user_input;
	char *path;
	char *dir_name = NULL;
	int st = 0;

	bsize = 1024;
	argc = 0;
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
		printf("%s", prompt);
		num_char = getline(&user_input, &bsize, stdin);
		if (num_char  == -1)
		{
			perror("\n\nYou have been shellshocked and your session has ended!\n");
			free(user_input);
			exit(st);
		}
		argc = get_token(user_input, argv);
		if (argc == 0)
			printf("You didn't enter any commands");
		dir_name = turtle_or_not(path, argv[1]);
		printf("dir_name = %s\n", dir_name);
		turtle_cross_road_or_not(argv, dir_name);
		st = 2;
	}
	free(user_input);
	return (0);
}
