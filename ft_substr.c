/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruwang <ruwang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:18:04 by ruwang            #+#    #+#             */
/*   Updated: 2024/04/26 12:02:11 by ruwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	else if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[i + start])
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
