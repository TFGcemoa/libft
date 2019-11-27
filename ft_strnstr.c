/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhochstr <nhochstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:49:20 by nhochstr          #+#    #+#             */
/*   Updated: 2019/10/17 13:48:30 by nhochstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)&haystack[0]);
	while (haystack[i] != '\0' && (i < (int)len || (int)len < 0))
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while ((haystack[j + i] == needle[j] || needle[j] == '\0')
				&& ((i + j) <= (int)len || (int)len < 0))
			{
				if (needle[j] == '\0')
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
