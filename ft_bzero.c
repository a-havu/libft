/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:11:08 by ahavu             #+#    #+#             */
/*   Updated: 2024/11/01 15:48:53 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*new_ptr;
	unsigned char	nul;
	size_t			i;

	i = 0;
	new_ptr = (unsigned char *)s;
	nul = '\0';
	while (i < n)
	{
		new_ptr[i] = nul;
		i++;
	}
}

int main()
{
        int n = 7;
        char arr[] = "Hello goodbye";
        char arr2[] = "Hello goodbye";
        printf("Array[7] before: ");
        printf("%c\n", arr[7]);
        printf("Array[7] after ft_bzero: ");
        ft_bzero(arr, n);
        printf("%c\n", arr[7]);
        printf("Array[7] after bzero: ");
        bzero(arr2, n);
        printf("%c\n", arr2[7]);
}
