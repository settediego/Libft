/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 22:32:19 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/13 22:41:22 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

// Standard Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <errno.h>
#include <limits.h>
#include <float.h>
#include <unistd.h>

// Character Functions
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

// String Functions
int		ft_strlen(const char *str);

// Memory Functions
void	ft_bzero(void *str, size_t n);
void	*ft_memset(void *str, int c, size_t n);

#endif