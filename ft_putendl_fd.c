/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fholfeld <fholfeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 21:26:56 by fillip            #+#    #+#             */
/*   Updated: 2025/05/23 15:00:06 by fholfeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *s, const int fd);
void	ft_putchar_fd(const char c, const int fd);

void	ft_putendl_fd(const char *s, const int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
