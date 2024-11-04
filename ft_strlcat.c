/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruwang <ruwang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:31:04 by ruwang            #+#    #+#             */
/*   Updated: 2024/04/25 20:57:36 by ruwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;
	size_t	i;

	dl = 0;
	sl = 0;
	i = 0;
	while (dest[dl])
		dl++;
	while (src[sl])
		sl++;
	if (size > dl)
	{
		while (src[i] && (dl + i) < size - 1)
		{
			dest[dl + i] = src[i];
			i++;
		}
	}
	if (size <= dl)
		return (sl + size);
	return (sl + dl);
}
