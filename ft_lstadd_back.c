/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <jocorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:20:47 by jocorrei          #+#    #+#             */
/*   Updated: 2021/10/31 20:20:47 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*storage;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			storage = ft_lstlast(*(lst));
			storage->next = new;
		}
	}
	return ;
}
