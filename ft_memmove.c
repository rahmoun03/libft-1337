/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:04:26 by arahmoun          #+#    #+#             */
/*   Updated: 2022/10/27 16:04:29 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ds;
	char	*sr;

	sr = (char *)src;
	ds = (char *)dst;
	if (dst > src)
	{
		while (len--)
			ds[len] = sr[len];
		return (dst);
	}
	return (ft_memcpy(dst, sr, len));
}
