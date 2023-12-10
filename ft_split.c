/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:04:44 by mbenchel          #+#    #+#             */
/*   Updated: 2023/11/19 23:58:20 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countwords(const char *s, char c)
{
	size_t	i;
	size_t	wc;

	i = 0;
	wc = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			wc++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (wc);
}

static char	**freemem(char **s)
{
	int	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			free(s[i]);
			i++;
		}
		free(s);
	}
	return (NULL);
}

static	char	*getwords(int *i, const char *s, char c)
{
	int		wordsz;
	int		tpos;
	int		j;
	char	*res;

	j = 0;
	while (s[*i] && s[*i] == c)
		(*i)++;
	tpos = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	wordsz = *i - tpos;
	res = (char *)malloc((wordsz + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (tpos + j < *i)
	{
		res[j] = s[tpos + j];
		j++;
	}
	res[j] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		wc;
	int		j;
	int		i;

	if (s == NULL)
		return (NULL);
	j = 0;
	i = 0;
	wc = countwords(s, c);
	res = (char **)malloc((wc + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	while (j < wc)
	{
		res[j] = getwords(&i, s, c);
		if (res[j] == NULL)
		{
			return (freemem(res));
		}
		j++;
	}
	res[wc] = NULL;
	return (res);
}
