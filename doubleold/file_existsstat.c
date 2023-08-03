#include "shellshocked.h"

#include "shellshocked.h"
#include <sys/stat.h>
int check_file_exists(char *command, char *dir_name)
{
    char *full_path;
    struct stat path_stat;
    int exists = 0;

    size_t full_path_len = strlen(command) + strlen(dir_name) + 2;
    full_path = (char *)malloc(full_path_len);
    if (full_path == NULL)
    {
        perror("Memory allocation error");
        exit(1);
    }

    strcpy(full_path, dir_name);
    strcat(full_path, "/");
    strcat(full_path, command);

    if (stat(full_path, &path_stat) != 0)
    {
        free(full_path);
        return (0);
    }

    exists = 0;
    if (S_ISDIR(path_stat.st_mode))
    {
        printf("Directory found\n");
        exists = 1;
    }
    else if (S_ISREG(path_stat.st_mode))
    {
        printf("File found\n");
        exists = 1;
    }
    else
    {
        printf("Not a file or directory\n");
    }

    free(full_path);
    return (exists);
}
