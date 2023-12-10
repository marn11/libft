/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:45:52 by mbenchel          #+#    #+#             */
/*   Updated: 2023/11/24 22:37:39 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;

	if ((int) count < 0 || (int) size < 0)
		return (NULL);
	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	s = malloc((count * size));
	if (s == NULL)
		return (NULL);
	ft_bzero(s, (count * size));
	return (s);
}
