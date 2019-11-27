/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countcharto.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhochstr <nhochstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:49:20 by nhochstr          #+#    #+#             */
/*   Updated: 2019/10/17 14:45:40 by nhochstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countcharto(char *str, char to_find)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (to_find == str[i])
			return (i);
		i++;
	}
	return (i);
}
