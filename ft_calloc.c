/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:02:11 by arahmoun          #+#    #+#             */
/*   Updated: 2022/10/24 21:05:41 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*re;

	re = (char *)malloc(count * size);
	if (!re)
		return (NULL);
	ft_bzero(re, (count * size));
	return (re);
}
