/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fholfeld <fholfeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 18:28:54 by fillip            #+#    #+#             */
/*   Updated: 2025/05/23 15:00:43 by fholfeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *src);

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (dsize == 0)
		return (src_len);
	i = 0;
	while (i < dsize - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
