/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fholfeld <fholfeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:55:44 by fillip            #+#    #+#             */
/*   Updated: 2025/05/23 14:59:02 by fholfeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *nlst)
{
	t_list	*nptr;

	if (!*lst)
		*lst = nlst;
	else
	{
		nptr = ft_lstlast(*lst);
		nptr->next = nlst;
	}
}
