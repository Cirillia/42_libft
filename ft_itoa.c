/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruwang <ruwang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:28:35 by ruwang            #+#    #+#             */
/*   Updated: 2024/04/29 16:34:03 by ruwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static int	ft_len_nbr(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static long	ft_abs(long n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

char	*ft_itoa(int n)
{
	size_t	sign;
	size_t	len;
	long	abn;
	char	*str;

	sign = (n < 0);
	abn = ft_abs(n);
	len = ft_len_nbr(abn);
	str = (char *)malloc(sizeof(char) * (len + sign + 1));
	if (!str)
		return (NULL);
	str[len + sign] = '\0';
	while (len--)
	{
		str[len + sign] = '0' + (abn % 10);
		abn /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
