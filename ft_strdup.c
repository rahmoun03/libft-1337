/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:45:39 by arahmoun          #+#    #+#             */
/*   Updated: 2022/10/10 00:56:01 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*re;
	size_t	size;

	size = ft_strlen(s1);
	re = (char *)malloc(size * (sizeof(char) + 1));
	if (!re)
		return (NULL);
	ft_strlcpy(re, s1, (size + 1));
	return (re);
}
