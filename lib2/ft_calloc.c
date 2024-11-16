/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafiai <bnafiai@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:25:03 by bnafiai           #+#    #+#             */
/*   Updated: 2024/11/15 16:31:38 by bnafiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	i;
	char	*items;

	if (nitems != 0 && size > SIZE_MAX / nitems)
		return (NULL);
	i = 0;
	items = (char *)malloc(nitems * size);
	if (!items)
		return (NULL);
	ft_bzero(items, nitems * size);
	return (items);
}
// check nitems and size with sizemax and handle them
