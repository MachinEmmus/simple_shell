#ifndef SHELL_H
#define SHELL_H

/*Allowed Libraries*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

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

extern char **environ;
/*PROTOTYPES*/
char **splitString(char *line);
char *get_line(void);
void printCommand(char **tokens);
char *get_env(const char *path_name);
char **splitStringPath(char *arguments, char **argvs);
void env_prog(char **tokens);
void childFork(char **tokens);
void errors(char **tokens, int interactions, char *argument);
void handleCtrlc(int i);
char *inttochar(int reads);
void *_calloc(unsigned int nmemb, unsigned int size);
void free_grid(char **grid, int height);

/*STRING*/
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);

/*STRUCTURE*/
int (*get_command(char *s))(char **);
int exit_func(char **token);
int env_func(char **token);
int nextstep(char **tokens);

#endif/*SHELL_H*/
