/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouizer <rbouizer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:00:08 by rbouizer          #+#    #+#             */
/*   Updated: 2023/11/12 18:20:40 by rbouizer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

// Fonctions de la libc
int     ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t count, size_t size);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *b, int c, size_t len);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s1);
int     ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
int     ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
int     ft_strlen(const char *str);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strrchr(const char *s, int c);
int     ft_tolower(int c);
int     ft_toupper(int c);

//Fonctions supplémentaires
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);

#endif