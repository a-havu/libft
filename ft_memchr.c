/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:01:33 by ahavu             #+#    #+#             */
/*   Updated: 2024/11/01 15:58:21 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	c_2;
	unsigned char	*s_2;

	i = 0;
	c_2 = (unsigned char)c;
	s_2 = (unsigned char *)s;
	while (s_2[i] && i < n)
	{
		if (s_2[i] == c_2)
			return ((void *)s_2 + i);
		else
			i++;
	}
	s_2 = NULL;
	return ((void *)s_2);
}
