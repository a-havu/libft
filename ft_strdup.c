/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:15:45 by ahavu             #+#    #+#             */
/*   Updated: 2024/11/01 14:11:31 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new;

	i = 0;
	new = (char *)s;
	new = (char *) malloc((ft_strlen(new) + 1) * (sizeof(char)));
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	return (new);
}
