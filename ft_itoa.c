/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: pnanna <pnanna@student.42bangkok.com>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/13 14:00:00 by pnanna           #+#    #+#              */
/*   Updated: 2026/09/19 14:53:05 by pnanna          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	number_len(long n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	number;
	size_t	len;

	number = n;
	len = number_len(number);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (number < 0)
	{
		result[0] = '-';
		number = -number;
	}
	result[--len] = (number % 10) + '0';
	while (number >= 10)
	{
		number /= 10;
		result[--len] = (number % 10) + '0';
	}
	return (result);
}
