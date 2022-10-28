/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:17:01 by arahmoun          #+#    #+#             */
/*   Updated: 2022/10/26 19:17:10 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c1;
	unsigned char	*s1;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (i < n && s1[i] != c1)
		i++;
	if (i < n && s1[i] == c1)
		return (s1 + i);
	return (NULL);
}
