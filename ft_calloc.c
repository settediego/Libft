/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:01:18 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/30 17:18:13 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*dest;

	if (nmemb && size > INT_MAX / nmemb)
		return (NULL);
	dest = (unsigned char *)malloc(nmemb * size);
	if (!dest)
		return ((void *)0);
	ft_bzero(dest, nmemb * size);
	return ((void *)dest);
}
