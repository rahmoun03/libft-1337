/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:18:27 by arahmoun          #+#    #+#             */
/*   Updated: 2022/10/24 21:32:20 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*val;

	i = 0;
	val = (unsigned char *)b;
	while (i < len)
	{
		val[i] = (unsigned char)c;
		i++;
	}
	return (val);
}
