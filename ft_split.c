/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhochstr <nhochstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:49:20 by nhochstr          #+#    #+#             */
/*   Updated: 2019/11/27 15:00:11 by nhochstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	int		tab[2];
	int		nbr;
	char	**ptr;
	int		leng;

	tab[0] = 0;
	tab[1] = 0;
	if (!s)
		return (NULL);
	nbr = ft_countwords(s, c);
	if (!(ptr = malloc(sizeof(char *) * (nbr + 1))))
		return (NULL);
	while (s[tab[1]] != '\0' && nbr > 0 && tab[0] < nbr)
	{
		leng = ft_countcharto((char *)s + tab[1], c);
		if (leng != 0)
		{
			if (!(ptr[tab[0]] = malloc(sizeof(char) * (leng + 1))))
				return (ft_free_subs(ptr, tab[0]));
			ft_putnchar(ptr[tab[0]++], leng, (char*)&s[tab[1]]);
		}
		tab[1] = tab[1] + leng + 1;
	}
	ptr[tab[0]] = 0;
	return (ptr);
}
