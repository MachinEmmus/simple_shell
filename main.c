#include "shell.h"
/**
 *
 *
 *
 */

int main(void)
{
   char *path;
   char *getLine;
   char **tokens;
   char **path_tokens;
    /*pid_t child;*/
int i = 0;
   /*int  status;*/
    
	while (1)
	{
        	if (isatty(STDIN_FILENO))
			write(1, "shell$ ", 7);
	
		getLine = get_line();
		/*printf("%s", getLine);*/
		/*memory leak here*/
        	if (getLine == NULL)
        	{
        		if (isatty(STDIN_FILENO))
               			write(1, "\n", 1);
           		continue;
	        }		
        	else
        	{
            		tokens = splitString(getLine);
			/*while(tokens[i])
			{
				printf("%s\n", tokens[i]);
				i++;
			}*/

	    		if (tokens[0][0] == '/')
            		{
                		printCommand(tokens);
            		}
	
            		else
            		{    
				/*memory leak here*/
                		path = get_env("PATH");
				printf("path: %s\n", path);
				/*i = 0*/
				/*free(path);*/
			
			/*free(path);*/
	
		                path_tokens = splitStringPath(path, tokens);

				while (path_tokens[i] != NULL)
				{
					/*printf("here\n");*/
					printf("%s [%d]\n", path_tokens[i], i);
					i++;
				}
				free_grid(path_tokens, 8);
			}
		}
                /*		i = 0;

		                while (path_tokens[i] != NULL)
                		{
    
		                    if (access(path_tokens[i], X_OK) == 0)
                		    {
		                        child = fork();

                		        if (child == -1)
                        		{
		                            perror("error");
                	    	            exit(0);
                        		}
		                        else if (child == 0)
                		        {
                            			if(execve(path_tokens[i], tokens, NULL) == -1)

			                                perror("error");
                        		 	exit(1);
                        		}
                        		else
					{2
                           			waitpid(-1, &status, 0);
			 			free(tokens);
					}
                    		    } i++;
                		}
            		}
        	}*/    
		free(getLine);
		free(tokens);
    	}
	free(path);
	return (0);
}

