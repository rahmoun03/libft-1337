/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:31:20 by arahmoun          #+#    #+#             */
/*   Updated: 2022/10/25 11:32:26 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	char	*re;
	int		i;

	if (!s || !f)
		return (NULL);
	s1 = (char *)s;
	re = (char *)malloc(ft_strlen(s) + 1);
	if (!(re))
		return (NULL);
	i = 0;
	while (s[i])
	{
		re[i] = f(i, s[i]);
		i++;
	}
	re[i] = '\0';
	return (re);
}
