/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:58:46 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/13 22:36:20 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (c >= 'A' && c <= 'Z'
		|| c >= 'a' && c <= 'z'
		|| c >= '0' && c <= '9');
}