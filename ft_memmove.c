/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruwang <ruwang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:03:48 by ruwang            #+#    #+#             */
/*   Updated: 2024/04/25 20:55:08 by ruwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	if (dest == src)
		return (dest);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	else
	{
		i = n;
		while (i--)
			*(char *)(dest + i) = *(char *)(src + i);
	}
	return (dest);
}
