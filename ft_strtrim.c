/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:19:39 by arahmoun          #+#    #+#             */
/*   Updated: 2022/10/25 11:23:04 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_start(char *s1, char *s2)
{
	int	i;
	int	a;
	int	skip;

	skip = 0;
	i = 0;
	while (s1[i])
	{
		a = 0;
		while (s2[a])
		{
			if (s1[i] == s2[a] && s2[a])
			{
				skip++;
				break ;
			}
			a++;
		}
		if (!s2[a])
			return (skip);
		i++;
	}
	return (skip);
}

static int	ft_end(char *s1, char *s2, int i)
{
	int	a;
	int	skip;

	skip = 0;
	i--;
	while (i >= 0)
	{
		a = 0;
		while (s2[a])
		{
			if (s1[i] == s2[a] && s2[a])
			{
				skip++;
				break ;
			}
			a++;
		}
		if (!s2[a])
			return (skip);
		i--;
	}
	return (skip);
}

static char	*ft_empty(void)
{
	char	*ret;

	ret = (char *)malloc(1);
	ret[0] = '\0';
	return (ret);
}

static char	*ft_strcpy(char *s1, char *s2)
{
	char	*dst;
	int		i;
	int		a;
	int		start;

	start = ft_start(s1, s2);
	a = 0;
	i = (int)ft_strlen(s1) - start - ft_end(s1, s2, (int)ft_strlen(s1));
	if (i <= 0)
		return (ft_empty());
	dst = (char *)malloc(i + 1);
	if (!dst)
		return (NULL);
	while (a < i)
	{
		dst[a] = s1[start];
		start++;
		a++;
	}
	dst[a] = '\0';
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*re;
	char	*s11;
	char	*s22;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	s11 = (char *)s1;
	s22 = (char *)s2;
	re = ft_strcpy(s11, s22);
	return (re);
}
