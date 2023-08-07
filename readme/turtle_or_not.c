#include "shellshocked.h"
/**
 * turtle_or_not - get path, then check_turtle
 * @environ: Environmental variables
 * @f_name: The command
 *
 * Return: Correct Directory name or NULL
 */
char *turtle_or_not(char *path, char *f_name)
{
	char *dir_name = NULL, *temp_path;
	char  buf[1024];
	int turtle;
	
	turtle = check_turtle(f_name, dir_name);
	printf("f_name = %s, dir_name = %s, turtle = %d\n", f_name, dir_name, turtle);
	if (turtle == 1)
	{
		return (dir_name);
	}
	dir_name = getcwd(buf, sizeof(buf));
	turtle = check_turtle(f_name, dir_name);
	printf("f_name = %s, dir_name = %s, turtle = %d\n", f_name, dir_name, turtle);
	if (turtle == 1)
		return (dir_name);
	temp_path = strdup(path);
	dir_name = strsep(&temp_path, ":");
	while (dir_name != NULL)
	{
		turtle = check_turtle(f_name, dir_name);
		printf("f_name = %s, dir_name = %s, turtle = %d\n", f_name, dir_name, turtle);
		if (turtle == 1)
		{
			if (temp_path)
				free(temp_path);
			return (dir_name);
		}
		dir_name = strsep(&temp_path, ":");
	}
	if (temp_path)
		free(temp_path);
	return (NULL);
}
