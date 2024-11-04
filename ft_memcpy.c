/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruwang <ruwang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:42:12 by ruwang            #+#    #+#             */
/*   Updated: 2024/04/29 15:58:35 by ruwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (dest);
	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}
