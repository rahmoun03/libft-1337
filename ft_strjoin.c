/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:05:54 by arahmoun          #+#    #+#             */
/*   Updated: 2022/10/24 22:07:50 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	a;
	char	*re;

	if (!(s1) || !(s2))
		return (NULL);
	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	re = (char *)malloc(len + 1);
	if (!re)
		return (NULL);
	while (i <= len && s1[i])
	{
		re[i] = s1[i];
		i++;
	}
	a = 0;
	while (s2[a])
		re[i++] = s2[a++];
	re[i] = '\0';
	return (re);
}
