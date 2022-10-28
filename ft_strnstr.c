/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:18:11 by arahmoun          #+#    #+#             */
/*   Updated: 2022/10/25 11:36:59 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	i;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (!haystack && len == 0)
		return (NULL);
	i = 0;
	while (haystack[i] && len > i)
	{
		a = 0;
		while (needle[a] == haystack[i + a] && len > i + a)
		{
			if (!needle[a + 1])
				return ((char *)haystack + i);
			a++;
		}
		i++;
	}
	return (NULL);
}
