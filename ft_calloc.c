/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diego <diego@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:01:18 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/28 21:54:33 by diego            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*dest;

	dest = (unsigned char *)malloc(nmemb * size);
	if (!dest)
		return ((void *)0);
	bzero(dest, nmemb * size);
	return ((void *)dest);
}
