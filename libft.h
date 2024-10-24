/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diego <diego@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 22:32:19 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/24 22:53:35 by diego            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Standard Libraries
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <math.h>
# include <ctype.h>
# include <time.h>
# include <errno.h>
# include <limits.h>
# include <unistd.h>

// Character Functions
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

// String Functions
int		ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

// Memory Functions
void	ft_bzero(void *str, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest_str, const void *src_str, size_t n);
void	*ft_memmove(void *dest_str, const void *src_str, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int 	ft_memcmp(const void *s1, const void *s2, size_t n);

#endif