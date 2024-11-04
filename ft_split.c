/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruwang <ruwang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:15:55 by ruwang            #+#    #+#             */
/*   Updated: 2024/04/26 12:10:26 by ruwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c && in_word)
			in_word = 0;
		else if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char	*ft_substring(const char *start, const char *end)
{
	char	*str;
	int		i;

	str = malloc((end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < end - start)
	{
		str[i] = start[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char		**array;
	int			words;
	int			i;
	const char	*start;

	words = ft_count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (*s)
	{
		start = s;
		while (*s && *s != c)
			s++;
		if (start < s)
			array[i++] = ft_substring(start, s);
		if (!*s)
			break ;
		s++;
	}
	array[i] = NULL;
	return (array);
}
