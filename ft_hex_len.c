/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <jocorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:47:46 by jocorrei          #+#    #+#             */
/*   Updated: 2021/12/15 14:47:46 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	hex_len(unsigned long long nbr)
{
	int	len;

	len = 0;
	if (nbr == 1)
		return (1);
	while (nbr)
	{
		nbr /= 16;
		len++;
	}
	return (len);
}
