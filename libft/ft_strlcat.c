/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalay <hatalay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:03:17 by hatalay           #+#    #+#             */
/*   Updated: 2022/11/30 17:34:22 by hatalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ssize;
	size_t	dsize;
	size_t	i;

	if (!size && !dst)
		return (0);
	ssize = ft_strlen (src);
	dsize = ft_strlen (dst);
	i = 0;
	if (dsize >= size || size == 0)
		return (ssize + size);
	while (src[i] && i < size - dsize - 1)
	{
		dst[dsize + i] = src[i];
		i++;
	}
	dst[dsize + i] = '\0';
	return (dsize + ssize);
}
