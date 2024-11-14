/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:16:06 by ahavu             #+#    #+#             */
/*   Updated: 2024/11/14 11:02:17 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		total_len;
	int		i;
	int		k;
	int		len_s1;

	i = 0;
	k = 0;
	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	total_len = len_s1 + ft_strlen(s2);
	new_str = ft_calloc((total_len + 1), sizeof(char));
	if (new_str == NULL)
		return (0);
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[k])
		new_str[i++] = s2[k++];
	new_str[i] = '\0';
	return (new_str);
}
