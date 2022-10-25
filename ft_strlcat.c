/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:16:31 by arahmoun          #+#    #+#             */
/*   Updated: 2022/10/09 17:30:55 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ds;
	size_t	d;
	size_t	s;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	ds = ft_strlen(dst);
	d = ft_strlen(src);
	s = ft_strlen(dst);
	if (ds > dstsize)
		return (ft_strlen(src) + dstsize);
	while (ds < dstsize - 1 && src[i])
		dst[ds++] = src[i++];
	dst[ds] = '\0';
	return (s + d);
}
