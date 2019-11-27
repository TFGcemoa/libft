/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freesubs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhochstr <nhochstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 10:49:23 by nhochstr          #+#    #+#             */
/*   Updated: 2019/11/27 14:59:47 by nhochstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_free_subs(char **ptr, int i)
{
	while (--i >= 0)
	{
		free(ptr[i]);
	}
	free(ptr);
	return (NULL);
}
