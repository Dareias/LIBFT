/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fholfeld <fholfeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:49:44 by fillip            #+#    #+#             */
/*   Updated: 2025/05/23 14:29:26 by fholfeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wcount(const char *s, char c)
{
	size_t	count;
	int		word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (*s != c && word == 0)
		{
			word = 1;
			count++;
		}
		else if (*s == c)
			word = 0;
		s++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*res;
	size_t	i;

	res = (char *) malloc(sizeof(char) * (n + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < n && s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static void	ft_fall(char **res, size_t i)
{
	while (i > 0)
	{
		i--;
		free(res[i]);
	}
	free(res);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	wcount;
	size_t	wlen;
	size_t	i;

	wcount = ft_wcount(s, c);
	res = (char **)malloc(sizeof(char *) * (wcount + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < wcount)
	{
		while (*s == c)
			s++;
		wlen = 0;
		while (s[wlen] && s[wlen] != c)
			wlen++;
		res[i] = ft_strndup(s, wlen);
		if (!res[i])
			return (ft_fall(res, i), NULL);
		s += wlen;
		i++;
	}
	res[i] = NULL;
	return (res);
}
