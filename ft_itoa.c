/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:22:40 by mbenchel          #+#    #+#             */
/*   Updated: 2023/11/13 03:55:58 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(long long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static	char	*itoap(int len, long long n, char *str)
{
	int	neg;

	neg = 0;
	if (n < 0)
	{
		n *= -1;
		neg = 1;
		str[0] = '-';
	}
	str[len] = '\0';
	while (len > neg)
	{
		str[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*res;
	long long	nb;
	int			len;

	len = intlen(n);
	nb = n;
	if (n < 0)
		len = len + 1;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	itoap(len, n, res);
	return (res);
}
