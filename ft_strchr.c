/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:01:54 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/23 17:32:38 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (!c)
		return ((char *)s);
	return ('\0');
}

// int main(void)
// {
// 	char	str[15] = "Hello World!";
// 	int		c = '\0';
// 	printf("%p \n", (void *)&str[12]);
// 	printf("%p", ft_strchr(str, c));
// 	return(0);
// }