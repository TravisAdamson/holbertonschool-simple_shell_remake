#ifndef SHELL_H
#define SHELL_H

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>
#include <sys/wait.h>
#include <signal.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define prompt "Shellshocked $"

extern char **environ;
int st;
int main(int argc, char **argv);
int print_env(char **environ);
int get_token(char *user_input, char **argv);
int check_run(char **argv, char **paths);
char *turtle_path(char **environ);
int check_turtle(char *f_name, char *dir_name);
char *turtle_or_not(char *path, char *f_name);
void turtle_cross_road_or_not(char **argv, char *dir_name);
#endif
