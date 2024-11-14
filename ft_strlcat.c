/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:21:14 by ahavu             #+#    #+#             */
/*   Updated: 2024/11/14 11:30:42 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	size_dst;
	size_t	size_src;
	size_t	result;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	size_dst = (ft_strlen(dst));
	size_src = (ft_strlen(src));
	if (size <= size_dst)
		return (size_src + size);
	else
		result = size_src + size_dst;
	while (src[i] && (size_dst + 1 < size))
	{
		dst[size_dst] = src[i];
		size_dst++;
		i++;
	}
	dst[size_dst] = '\0';
	return (result);
}
