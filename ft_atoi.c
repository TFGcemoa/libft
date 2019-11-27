/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhochstr <nhochstr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:49:20 by nhochstr          #+#    #+#             */
/*   Updated: 2019/11/27 14:59:08 by nhochstr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					k;
	unsigned long long	n;

	k = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		k = -k;
	if (*str == '+' || *str == '-')
		str++;
	n = 0;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - 48);
		str++;
	}
	if (n > 9223372036854775807 && k < 0)
		return (0);
	if (n > 9223372036854775807 && k > 0)
		return (-1);
	return (n * k);
}
