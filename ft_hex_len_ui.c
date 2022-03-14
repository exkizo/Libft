/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_len_ui.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <jocorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:21:20 by jocorrei          #+#    #+#             */
/*   Updated: 2021/12/15 15:21:20 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	hex_len_ui(unsigned long long nbr)
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
