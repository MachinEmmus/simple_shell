#ifndef SHELL_H
#define SHELL_H

/*allowed libraries*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/*Enviroment variable*/
extern char **environ;

/**
 * struct noenvfunc - our struct
 *
 * @str: string typed for the standar input
 * @func: is my function returned
 *
 */
typedef struct noenvfunc
{
	char *str;
	int (*func)(char **);
} s_func;

/*prototypes*/
char *get_env(const char *path_name);
void printCommand(char **tokens);
char **splitString(char *line);
char **splitStringPath(char *arguments, char **argvs);
char *get_line(void);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *str_concat(char *s1, char *s2);
int (*get_command(char *s))(char **);
int exit_func(char **token);
int env_func(char **env);

#endif/*SHELL_H*/
