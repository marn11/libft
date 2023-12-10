/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:41:52 by mbenchel          #+#    #+#             */
/*   Updated: 2023/11/14 01:02:06 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	slen;

	if (!s)
		return (NULL); 
	slen = ft_strlen(s);
	if (s == NULL || start >= slen)
		return (ft_strdup(""));
	if (start + len > slen)
		len = slen - start;
	c = (char *)malloc((len + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	ft_strlcpy(c, &s[start], len + 1);
	return (c);
}
