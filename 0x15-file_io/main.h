#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int  print1(char *c);
int _putchar(char c);


void err(char *e, char *a, char *i);
void op_cp(char *file, char *file1);
int append_text_to_file(const char *filename, char *text_content);
#endif
