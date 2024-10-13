/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:51:09 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/13 19:44:36 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ptr;
	
	ptr = (unsigned char *)str;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}