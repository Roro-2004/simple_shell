#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#define DEL " \t\n"

int _putchar2(char r);
int put(char *);
char *input(void);
char *_strncpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
char *_double(char *str);
char **token(char *written);
void free_grid(char **grid);
int exe(char **cmd, char **argv, char **env, int i);
char *envr(char *var, char **env);
char *pathh(char *cmd, char **env);
void reverse_array(char *a, int n);
void error(char *n, char *command, int index);
int is_built(char *cmd);
char *intstr(int num);
void p_env(char **cmd, int *stat, char **env);
void h_built(char **cmd, char **argv, char **env, int *stat, int idx);
int _atoi(char *s);
void exv(char **cmd, char **argv, int *stat, int idx);
void error2(char *n, char *command, int index);
int isp(char *cmd);

#endif

