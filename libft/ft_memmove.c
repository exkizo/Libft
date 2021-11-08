/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <jocorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:47:04 by jocorrei          #+#    #+#             */
/*   Updated: 2021/10/25 18:47:04 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	const char	*lasts;
	char		*lastd;

	d = dest;
	s = src;
	lasts = s + (len - 1);
	lastd = d + (len - 1);
	if (!dest && !src)
		return (NULL);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
		while (len--)
			*lastd-- = *lasts--;
	return (dest);
}
