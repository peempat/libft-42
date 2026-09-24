/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnanna <peemkunghaha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 14:00:00 by pnanna            #+#    #+#             */
/*   Updated: 2026/09/24 14:16:47 by pnanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
// #include <stdio.h>
// int main()
// {
// 	int num;
// 	num = 'A';
// 	printf("%d \n",num);
// 	printf("%d",ft_isprint(num));


// }
