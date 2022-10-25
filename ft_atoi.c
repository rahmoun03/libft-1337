/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:20:50 by arahmoun          #+#    #+#             */
/*   Updated: 2022/10/24 21:00:35 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sing;
	int	val;

	sing = 1;
	i = 0;
	val = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| '\v' == str[i] || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sing = sing * (-1);
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0' && str[i])
	{
		val = val * 10 + (str[i] - 48);
		i++;
	}
	return (val * sing);
}
