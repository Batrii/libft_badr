/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafiai <bnafiai@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:41:15 by bnafiai           #+#    #+#             */
/*   Updated: 2024/10/25 20:09:15 by bnafiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst;

	dst = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		dst[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
