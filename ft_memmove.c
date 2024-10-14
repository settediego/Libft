/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:20:32 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/14 20:36:26 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest_str, const void *src_str, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	dest_ptr = (unsigned char *)dest_str;
	src_ptr = (unsigned char *)src_str;
	if (dest_ptr < src_ptr)
	{
		i = 0;
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i > 0)
		{
			i--;
			dest_ptr[i] = src_ptr[i];
		}
	}
	return (dest_str);
}

// int main(void) {
//     char src1[] = "Aloha";
//     char dest1[20] = "Hello, World!";

//     printf("Antes da cópia (sem sobreposição):\n");
//     printf("src1: %s\n", src1);
//     printf("dest1: %s\n", dest1);

//     printf("Endereço de src1: %p\n", (void *)src1);
//     printf("Endereço de dest1: %p\n", (void *)dest1);

//     ft_memmove(dest1, src1, 5);
//     printf("Depois da cópia (sem sobreposição):\n");
//     printf("dest1: %s\n", dest1);

//     return 0;
// }