/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafiai <bnafiai@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:08:49 by bnafiai           #+#    #+#             */
/*   Updated: 2024/11/14 15:46:22 by bnafiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	abs_val(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	length_number(int n)
{
	int				length;
	unsigned int	num;

	length = 1;
	num = abs_val(n);
	while (num >= 10)
	{
		num = num / 10;
		length++;
	}
	return (length + (n < 0));
}

char	*ft_itoa(int n)
{
	int				len;
	char			*number;
	unsigned int	num;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = length_number(n);
	number = (char *)malloc(len + 1);
	if (!number)
		return (NULL);
	number[len] = '\0';
	num = abs_val(n);
	while (len-- > 0)
	{
		number[len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		number[0] = '-';
	return (number);
}
