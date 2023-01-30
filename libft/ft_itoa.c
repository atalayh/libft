/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalay <hatalay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:54:28 by hatalay           #+#    #+#             */
/*   Updated: 2022/12/19 14:48:34 by hatalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int a)
{
	int	len;

	len = 0;
	if (a == 0)
		return (1);
	if (a < 0)
	{
		if (a == -2147483648)
		{
			len++;
			a = -147483648;
		}
		len++;
		a = -a;
	}
	while (a > 0)
	{
		a /= 10;
		len++;
	}
	return (len);
}

int	ft_mod(int n)
{
	n %= 10;
	return (n);
}

char	*ft_str(int n, char *it, int i)
{
	int	control;
	int	x;

	x = i;
	control = 0;
	if (n < 0)
	{
		n = -n;
		control++;
	}
	it[i] = '\0';
	while (i > 0)
	{
		it[i - 1] = ft_mod(n) + 48;
		n /= 10;
		i--;
	}
	i = ft_intlen(n);
	it[x] = '\0';
	if (control == 1)
		it[0] = '-';
	return (it);
}

char	*ft_itoa(int n)
{
	char	*it;
	int		i;

	i = ft_intlen(n);
	if (n == -2147483648)
	{
		it = ft_strdup("-2147483648");
		return (it);
	}
	it = malloc(ft_intlen(n) + 1);
	if (!it)
		return (NULL);
	ft_str(n, it, i);
	return (it);
}
