/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <jocorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 21:56:06 by jocorrei          #+#    #+#             */
/*   Updated: 2021/10/25 21:56:06 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;

	s = (char *)str;
	if (!s)
		return (NULL);
	while (*s)
		s++;
	while (s >= str)
	{
		if (*s == (char)c)
			return (s);
		s--;
	}
	return (NULL);
}
