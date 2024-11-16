/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafiai <bnafiai@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:54:09 by bnafiai           #+#    #+#             */
/*   Updated: 2024/11/11 16:51:30 by bnafiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	reverse_cpy(unsigned char *dest, const unsigned char *src, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		dest[i - 1] = src[i - 1];
		i--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*first;
	unsigned char	*second;
	size_t			i;

	first = (unsigned char *)dest;
	second = (unsigned char *)src;
	if (first == second || n == 0)
		return (dest);
	if (first < second)
	{
		i = 0;
		while (i < n)
		{
			first[i] = second[i];
			i++;
		}
	}
	else
	{
		reverse_cpy(first, second, n);
	}
	return (dest);
}
