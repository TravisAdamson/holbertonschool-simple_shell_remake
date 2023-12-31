#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_ARGS 10

int main() {
    char input[100];
    char *args[MAX_ARGS];
    int i;
    pid_t pid = fork();

    while (1) {
        printf("Enter command: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';
        if (strcmp(input, "exit") == 0) {
            break;
        }
        if (strcmp(input, "cd -") == 0) {
            chdir(getenv("OLDPWD"));
            continue;
        }
        args[0] = strtok(input, " ");
        for (i = 1; i < MAX_ARGS; i++) {
            args[i] = strtok(NULL, " ");
            if (args[i] == NULL) {
                break;
            }
        }
        if (strcmp(args[0], "cd") == 0) {
            if (args[1] == NULL) {
                chdir(getenv("HOME"));
            } else {
                chdir(args[1]);
            }
            setenv("OLDPWD", getenv("PWD"), 1);
            setenv("PWD", getcwd(NULL, 0), 1);
            continue;
        }
        pid = fork();
        if (pid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {
            execvp(args[0], args);
            perror("execvp");
            exit(EXIT_FAILURE);
        } else {
            int status;
            waitpid(pid, &status, 0);
        }
    }
    return 0;
}
