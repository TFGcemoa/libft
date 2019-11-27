/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhochstr <nhochstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:49:20 by nhochstr          #+#    #+#             */
/*   Updated: 2019/11/27 15:06:31 by nhochstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*strdst;
	unsigned char	*strsrc;
	size_t			i;

	if (!n || (!dst && !src))
		return (dst);
	strdst = (unsigned char *)dst;
	strsrc = (unsigned char *)src;
	i = 0;
	while (i++ < n)
		*strdst++ = *strsrc++;
	return (dst);
}
