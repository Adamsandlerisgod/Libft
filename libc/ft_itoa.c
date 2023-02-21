/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:24:20 by whendrik          #+#    #+#             */
/*   Updated: 2023/02/20 20:30:45 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	numbers(int n)
{
	unsigned int	num;

	num = 0;
	while (n >= 1)
	{
		n = n / 10;
		num++;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char			*res;
	long			total;
	unsigned int	num;

	num = numbers(n);
	res = (char *)malloc(sizeof(char) * (num + 1));
	if (res == NULL)
		return (NULL);
	res[num] = '\0';
	total = (long)n;
	if (total < 0)
	{
		res[0] = '-';
		total = -total;
	}
	while (total > 0)
	{
		num--;
		res[num] = total % 10 + '0';
		total = total / 10;
	}
	return (res);
}
/*#include <stdio.h>

int	main(void)
{
	unsigned int i = 15;

	printf("%d", numbers(i));
}*/
