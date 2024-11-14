/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:21:21 by ahavu             #+#    #+#             */
/*   Updated: 2024/11/13 17:14:39 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_counter(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*edgecases(char *str, int n)
{
	if (n == INT_MIN)
	{
		str = ft_calloc(12, sizeof(char));
		if (str)
		{
			ft_strlcpy(str, "-2147483648", 12);
			return (str);
		}
	}
	else if (n == 0)
	{
		str = ft_calloc(2, sizeof(char));
		if (str)
		{
			str[0] = '0';
			str[1] = '\0';
			return (str);
		}
	}
	return (NULL);
}

static char	*ft_itoa_2(int n, char *str)
{
	int		len;

	len = digit_counter(n);
	if (n < 0)
		n = -n;
	while (n)
	{
		str[--len] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = NULL;
	if (n == INT_MIN || n == 0)
	{
		str = edgecases(str, n);
		return (str);
	}
	str = ft_calloc(digit_counter(n) + 1, sizeof(char));
	if (!str)
		return (NULL);
	str = ft_itoa_2(n, str);
	if (n < 0 && str)
		str[0] = '-';
	return (str);
}
