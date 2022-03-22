/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkiragu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:50:40 by jkiragu           #+#    #+#             */
/*   Updated: 2022/03/22 23:27:37 by jkiragu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int             ft_atoi(const char *str);
void            ft_bzero(void *s1, size_t n);
//void *calloc(size_t count, size_t size) 
int             ft_isalnum(int c);
int		        ft_isalpha(int c);
int             ft_isascii(int c);
int             ft_isdigit(int c);
int             ft_isprint(int c);
void            *ft_memchr(const void *s, int c, size_t n);
int             ft_memcmp(const void *s1, const void *s2, size_t n);
void            *ft_memcpy(void *dst, const void *src, size_t n);
void            *ft_memmove(void *dst, const void *src, size_t len);
void            *ft_memset(void *s1, int c, size_t len);
char            *ft_strchr(const char *str, int c);
char            *ft_strdup(const char *s1);
size_t          ft_strlcat(char *dest, char *src, size_t cat_len);
size_t          ft_strlcpy(char *dst, char *src, size_t cpy_len);
size_t          ft_strlen(char *str);
int             ft_strncmp(char *s1, char *s2, size_t n);
char            *ft_strnstr(char *s1, char *s2, size_t len);
char            *ft_strrchr(const char *str, int c);
int             ft_tolower(int c);
int             ft_toupper(int c);

#endif
