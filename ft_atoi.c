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

static void	ft_sing(char c, int *sing, unsigned long *i)
{
	if (c == '-' || c == '+')
	{
		if (c == '-')
			*sing = *sing * (-1);
		*i = *i + 1;
	}
}

int	ft_atoi(const char *str)
{
	unsigned long	i;
	int				sing;
	unsigned long	val;

	sing = 1;
	i = 0;
	val = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| '\v' == str[i] || str[i] == '\r' || str[i] == '\f')
		i++;
	ft_sing(str[i], &sing, &i);
	while (str[i] <= '9' && str[i] >= '0' && str[i])
	{
		val = val * 10 + (str[i] - 48);
		if (val > MAX_LOG_LOG && sing == 1)
			return (-1);
		else if (val > MAX_LOG_LOG && sing == -1)
			return (0);
		i++;
	}
	return (val * sing);
}
