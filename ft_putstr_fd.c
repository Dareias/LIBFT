/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fholfeld <fholfeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:34:25 by fillip            #+#    #+#             */
/*   Updated: 2025/05/23 15:00:13 by fholfeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *src);

void	ft_putstr_fd(const char *s, const int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
