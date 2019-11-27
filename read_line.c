#include "shell.h"

char *get_line(void)
{
        char *new_line = NULL;
        size_t size = 0;

        fflush(stdin);
        if(getline(&new_line, &size, stdin) == 1)
        {
                free(new_line);
                /*exit(EXIT_FAILURE);*/
		return(NULL);
        }
	return (new_line);
}

