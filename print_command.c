#include "shell.h"

void printCommand(char **tokens)
{
    pid_t child;
    int status;

    child = fork();

    if (child == -1)
    {
        perror("error");
        exit(0);
    }
    else if (child == 0)
    {
        if(execve(tokens[0], tokens, NULL) == -1)
            perror("error");
        exit(1);
    }    
    else
        do {
			waitpid(child, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
}
