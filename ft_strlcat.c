/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhochstr <nhochstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:49:20 by nhochstr          #+#    #+#             */
/*   Updated: 2019/10/17 14:32:30 by nhochstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(
	char *dst, const char *src, size_t dstsize)
{
	size_t	lenghdst;
	size_t	j;
	size_t	lenghsrc;
	size_t	l;

	j = 0;
	lenghdst = ft_strlen((char *)dst);
	lenghsrc = ft_strlen((char *)src);
	l = lenghdst;
	if (dstsize == 0)
		return (lenghsrc);
	if (lenghdst >= dstsize)
		return (lenghsrc + (int)dstsize);
	while (lenghdst < dstsize && src[j] != '\0')
	{
		dst[lenghdst] = src[j];
		j++;
		lenghdst++;
	}
	if ((l + lenghsrc) >= dstsize)
		dst[lenghdst - 1] = '\0';
	else
		dst[lenghdst] = '\0';
	return (lenghsrc + l);
}
