/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fholfeld <fholfeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:11:53 by fillip            #+#    #+#             */
/*   Updated: 2025/05/23 15:01:13 by fholfeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);

char	*ft_substr(const char *s, unsigned int start, unsigned int len)
{
	size_t	src_len;
	size_t	copy_len;
	char	*sub;

	if (!s)
		return (NULL);
	src_len = ft_strlen(s);
	if (start >= src_len)
	{
		sub = (char *)malloc(sizeof(char));
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	copy_len = src_len - start;
	if (len < copy_len)
		copy_len = len;
	sub = (char *)malloc(sizeof(char) * copy_len + 1);
	ft_memcpy(sub, s + start, copy_len);
	sub[copy_len] = '\0';
	return (sub);
}
