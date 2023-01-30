/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalay <hatalay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:46:33 by hatalay           #+#    #+#             */
/*   Updated: 2022/12/19 17:47:46 by hatalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!src && !dst)
		return (0);
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			((((char *)dst)[len]) = ((const char *)src)[len]);
		}
	}
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
