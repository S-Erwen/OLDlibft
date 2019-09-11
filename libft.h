/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Erwen <dev.sanjaro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 13:12:16 by Erwen             #+#    #+#             */
/*   Updated: 2019/08/30 13:12:16 by Erwen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void	ft_putchar(char c);
void	ft_putstr(const char *str);

int 	ft_atoi(const char *nptr);

int		ft_strcmp(const char *str1, const char *str2);
int		ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t size);
char	*ft_strncat(char *dest, const char *src, size_t size);
char	*ft_strncpy(char *dest, const char *src, size_t size);
char	*ft_strnstr(char *s1, char *s2, size_t size);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strdup(const char *s);
char	*ft_strstr(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

int		ft_memcmp(const void *s1, const void *s2, size_t size);
void 	*ft_memchr(const void *s, int c, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t size); // A re test
void	*ft_memmove(void *dest, const void *src, size_t size); // A re test
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);

int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);

int		ft_toupper(int c);
int		ft_tolower(int c);

# endif