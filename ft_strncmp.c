/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:17:48 by arahmoun          #+#    #+#             */
/*   Updated: 2022/10/25 11:33:45 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	i = 0;
	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (s11[i] == s22[i] && i < n - 1 && (s11[i] != '\0' || s22[i] != '\0'))
		i++;
	if (s11[i] != s22[i])
		return (s11[i] - s22[i]);
	return (0);
}
