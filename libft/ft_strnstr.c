/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalay <hatalay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:16:33 by hatalay           #+#    #+#             */
/*   Updated: 2022/10/19 18:32:09 by hatalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;

	x = 0;
	i = 0;
	if (needle[0] == 0)
		return ((char *)(haystack));
	while (len > i && haystack[i])
	{
		x = 0;
		while (haystack[i + x] == needle[x] && haystack[i + x] && len > (i + x))
			x++;
		if (needle[x] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
