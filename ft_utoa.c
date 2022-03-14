/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <jocorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:33:36 by jocorrei          #+#    #+#             */
/*   Updated: 2021/12/13 19:33:36 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	numlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_utoa(unsigned int n)
{
	char			*strnb;
	int				nblen;
	int				i;

	nblen = numlen(n);
	i = 0;
	strnb = (char *)malloc((nblen + 1) * sizeof(char));
	if (strnb == NULL)
		return (NULL);
	strnb[nblen] = '\0';
	while (nblen-- != i)
	{
		strnb[nblen] = (n % 10) + '0';
		n /= 10;
	}
	return (strnb);
}
