/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:42:25 by mbenchel          #+#    #+#             */
/*   Updated: 2023/11/17 22:57:28 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*m;

	i = 0;
	m = (unsigned char *)s;
	while (i < n)
	{
		if (m[i] == (unsigned char)c)
			return ((void *)&m[i]);
		i++;
	}
	return (NULL);
}
