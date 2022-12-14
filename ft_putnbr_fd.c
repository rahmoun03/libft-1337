/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:21:02 by arahmoun          #+#    #+#             */
/*   Updated: 2022/10/24 21:34:17 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	n1;

	n1 = (long int)n;
	if (n1 < 0)
	{
		n1 = n1 * (-1);
		ft_putchar_fd('-', fd);
	}
	if (n1 > 0 && n1 <= 9)
		ft_putchar_fd(n1 + '0', fd);
	else if (n1 > 9)
	{
		ft_putnbr_fd(n1 / 10, fd);
		ft_putnbr_fd(n1 % 10, fd);
	}
	else
		ft_putchar_fd('0', fd);
}
