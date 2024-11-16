/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafiai <bnafiai@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:11:36 by bnafiai           #+#    #+#             */
/*   Updated: 2024/10/31 14:44:16 by bnafiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*last_o;

	last_o = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			last_o = ((char *)(str + i));
		}
		i++;
	}
	if ((char) c == '\0')
	{
		return ((char *)(str + i));
	}
	return (last_o);
}
