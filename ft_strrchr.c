/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:38:24 by ahavu             #+#    #+#             */
/*   Updated: 2024/11/14 11:59:06 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	c = (unsigned char)c;
	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (len > 0)
	{
		if (s[len] != c)
			len--;
		if (s[len] == c)
			return ((char *)s + len);
	}
	s = NULL;
	return ((char *)s);
}
