/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalay <hatalay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:05:30 by hatalay           #+#    #+#             */
/*   Updated: 2022/12/21 18:06:56 by hatalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*a;
	const char	*b;
	size_t		i;

	if (!dst && !src)
		return (0);
	i = 0;
	a = (char *)dst;
	b = (const char *)src;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
