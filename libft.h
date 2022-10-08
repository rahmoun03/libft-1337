#ifndef LIBFT_H
# define LIBFT_H

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *str);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcpy(char *dst, const char * src, size_t dstsize);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_atoi(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);

#endif