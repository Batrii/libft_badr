/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafiai <bnafiai@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:41:18 by bnafiai           #+#    #+#             */
/*   Updated: 2024/10/25 20:09:40 by bnafiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	len_d = i;
	while (src[j] != '\0')
		j++;
	len_s = j;
	if (size == 0 || len_d >= size)
		return (size + len_s);
	j = 0;
	while (src[j] != '\0' && (len_d + j < size - 1))
	{
		dst[len_d + j] = src[j];
		j++;
	}
	dst[len_d + j] = '\0';
	return (len_d + len_s);
}
