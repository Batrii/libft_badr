/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafiai <bnafiai@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:41:09 by bnafiai           #+#    #+#             */
/*   Updated: 2024/11/09 18:15:27 by bnafiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char	*first;
	unsigned char	*second;
	size_t			i;

	first = (unsigned char *)s1;
	second = (unsigned char *)s2;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (n == 0)
		return (s1);
	i = 0;
	while (i < n)
	{
		first[i] = second[i];
		i++;
	}
	return (s1);
}
