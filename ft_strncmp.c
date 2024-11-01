/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:39:18 by ahavu             #+#    #+#             */
/*   Updated: 2024/11/01 14:20:37 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if ((s1[i] - s2[i]) != 0 && i < n)
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] && i < n)
	{
		return (0 - s2[i]);
	}
	return (0);
}
