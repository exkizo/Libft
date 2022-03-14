/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <jocorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:54:30 by jocorrei          #+#    #+#             */
/*   Updated: 2021/10/30 16:54:30 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lem;

	lem = (t_list *)malloc(sizeof(t_list));
	if (lem == NULL)
		return (NULL);
	lem->content = content;
	lem->next = NULL;
	return (lem);
}
