/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 06:29:13 by mbenchel          #+#    #+#             */
/*   Updated: 2023/11/20 03:14:11 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*b;
	unsigned char	v;
	size_t			i;

	b = (unsigned char *)s;
	v = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		b[i] = v;
		i++;
	}
	return (s);
}
