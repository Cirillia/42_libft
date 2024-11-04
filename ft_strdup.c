/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruwang <ruwang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:52:43 by ruwang            #+#    #+#             */
/*   Updated: 2024/04/26 12:07:43 by ruwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	j = 0;
	while (s[j])
	{
		dest[j] = s[j];
		j++;
	}
	dest[j] = 0;
	return (dest);
}
