/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhochstr <nhochstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:49:20 by nhochstr          #+#    #+#             */
/*   Updated: 2019/10/17 14:32:10 by nhochstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*strdst;
	unsigned char	*strsrc;
	size_t			i;

	strdst = (unsigned char *)dst;
	strsrc = (unsigned char *)src;
	i = 0;
	while (i++ < n && *strsrc != (unsigned char)c)
		*strdst++ = *strsrc++;
	if (*strsrc == (unsigned char)c)
	{
		*strdst = *strsrc;
		return (&dst[i]);
	}
	return (NULL);
}
