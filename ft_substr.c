/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:28:37 by arahmoun          #+#    #+#             */
/*   Updated: 2022/10/25 11:29:09 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
	{
		s2 = (char *)malloc(1);
		s2[0] = '\0';
		return (s2);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	s2 = (char *)malloc(len + 1);
	if (!s2)
		return (NULL);
	while ((s[i] || s[i - 1]) && (i < len))
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
