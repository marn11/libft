/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:48:33 by mbenchel          #+#    #+#             */
/*   Updated: 2023/11/12 23:42:30 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*t;

	if ((!s1 && !s2) || !n)
		return (0);
	i = 0;
	s = (unsigned char *)s1;
	t = (unsigned char *)s2;
	while (i < n)
	{
		if (s[i] != t[i])
			return (s[i] - t[i]);
		i++;
	}
	return (0);
}
