/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fholfeld <fholfeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 21:51:43 by fillip            #+#    #+#             */
/*   Updated: 2025/05/23 15:00:23 by fholfeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *src);
void	*ft_memcpy(void *dst, const void *src, size_t n);

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	len;

	len = ft_strlen(s);
	res = (char *)malloc(len +1);
	if (!res)
		return (NULL);
	ft_memcpy(res, s, len + 1);
	return (res);
}
