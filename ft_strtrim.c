/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 01:35:08 by mbenchel          #+#    #+#             */
/*   Updated: 2023/11/14 01:03:36 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkset(char c, const char *set)
{
	size_t	i;		

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_trimstart(const char *s, const char *set)
{
	size_t	i;

	i = 0;
	while (s[i] && checkset(s[i], set))
		i++;
	return (i);
}

static size_t	ft_trimend(const char *s, const char *set)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0 && checkset(s[i - 1], set))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	trimend;
	size_t	trimstart;
	char	*tr;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	trimstart = ft_trimstart(s1, set);
	trimend = ft_trimend(s1, set);
	len = (trimend - trimstart);
	if (trimend <= trimstart)
		return (ft_strdup(""));
	tr = (char *)malloc((len + 1) * sizeof(char));
	if (tr == NULL)
		return (NULL);
	ft_strlcpy(tr, s1 + trimstart, len + 1);
	return (tr);
}
