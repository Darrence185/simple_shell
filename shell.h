#ifndef  SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <fcntl.h>

#define PATH_MAX 1024
extern char **environ;

int main(int argc, char *argv[]);

/*used in _strings.c file*/
