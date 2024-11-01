/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:01:15 by ahavu             #+#    #+#             */
/*   Updated: 2024/11/01 14:21:35 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		li;
	size_t		li_len;

	i = 0;
	li_len = ft_strlen(little);
	if (li_len == 0)
		return ((char *)big);
	while (i < len && big[i])
	{
		li = 0;
		while ((big[i]) && (little[li]) && (big[i] == little[li]))
		{
			i++;
			li++;
			if (li == li_len)
				return ((char *)big + (i - li_len));
		}
		i++;
	}
	return(NULL);
}
