/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <jocorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:53:50 by jocorrei          #+#    #+#             */
/*   Updated: 2021/10/28 15:53:50 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	numlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*strnb;
	int				nblen;
	int				i;

	nblen = numlen(n);
	i = 0;
	strnb = (char *)malloc((nblen + 1) * sizeof(char));
	if (strnb == NULL)
		return (NULL);
	if (n == -2147483648)
		free(strnb);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	strnb[nblen] = '\0';
	if (n < 0)
	{
		strnb[i++] = '-';
		n *= -1;
	}
	while (nblen-- != i)
	{
		strnb[nblen] = (n % 10) + '0';
		n /= 10;
	}
	return (strnb);
}
