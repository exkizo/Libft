/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <jocorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 22:03:58 by jocorrei          #+#    #+#             */
/*   Updated: 2021/10/26 22:03:58 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(num * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, num);
	return (ptr);
}
