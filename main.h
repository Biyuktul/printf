#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int check_formater(char str, va_list *arg, int i, int *c);
int _printf(const char *format, ...);
int _puts(char *str, int i, int *c);
int _putchar(int character, int i, int *c);

#endif /* MAIN_H */
