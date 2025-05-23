/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fillip <fillip@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:55:44 by fillip            #+#    #+#             */
/*   Updated: 2025/05/23 21:33:30 by fillip           ###   ########.fr       */
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
