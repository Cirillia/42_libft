/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruwang <ruwang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:41:32 by ruwang            #+#    #+#             */
/*   Updated: 2024/04/25 21:15:02 by ruwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int		len;
	char	n;

	len = 0;
	n = '\n';
	if (!s)
		return ;
	while (s[len])
		len++;
	write(fd, s, len);
	write(fd, &n, 1);
}
