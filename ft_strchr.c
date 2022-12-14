/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:15:55 by arahmoun          #+#    #+#             */
/*   Updated: 2022/10/09 17:27:50 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*val;

	i = 0;
	val = (char *)s;
	while ((char )c != s[i] && s[i] != '\0')
		i++;
	if ((char )c == s[i])
		return (val + i);
	else if (!s[i])
		return (NULL);
	return (NULL);
}
