#ifndef SHELL_H
#define SHELL_H

/*allowed libraries*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/*Enviroment variable*/
extern char **environ;

/*prototypes*/
char *get_env(const char *path_name);
void printCommand(char **tokens);
char **splitString(char *line);
char **splitStringPath(char *arguments, char **argvs);
char *get_line(void);

int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *str_concat(char *s1, char *s2);

#endif/*SHELL_H*/
