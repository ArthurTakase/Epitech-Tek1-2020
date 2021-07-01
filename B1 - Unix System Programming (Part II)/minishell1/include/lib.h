/*
** EPITECH PROJECT, 2021
** B-PSU-101-BDX-1-1-minishell1-arthur.decaen
** File description:
** lib
*/

#ifndef LIB_H_
#define LIB_H_

int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);
void my_putstr(char const *str);
char *clonestr(char *txt);
char *my_strcat(char *dest, char const *src);
int my_strncmp(char const *s1, char const *s2);
int my_in(char want, char *source);

#endif