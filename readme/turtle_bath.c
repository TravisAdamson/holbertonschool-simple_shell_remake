#include "shellshocked.h"

/**
 * turtle_bath - gets the path ready for stat
 * @length: the length of path_name
 * @path_name: the full path with command
 *
 * Return: The cleaned path name with the null byte removed
 */
char *turtle_bath(int length, char *this_path)
{
	char *temp_path = this_path;
	char *new_path = NULL;
	int i = 0, j = 0;

	for (i = 0; i < length; i++)
	{
		if ((temp_path[i] == '\n') || (temp_path[i] == '\0'))
			break;
	}
	new_path = malloc(i + 1);
	for (j = 0; j < i; j++)
		new_path[j] = temp_path[j];
	printf("new_path = %s\n", new_path);
	this_path = strdup(new_path);
	free(new_path);
	return(this_path);
}
