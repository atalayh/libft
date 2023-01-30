/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalay <hatalay@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:35:55 by hatalay           #+#    #+#             */
/*   Updated: 2022/12/02 14:36:08 by hatalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*z;

	z = (void *)malloc(num * size);
	if (!z)
		return (NULL);
	ft_bzero(z, num * size);
	return (z);
}
