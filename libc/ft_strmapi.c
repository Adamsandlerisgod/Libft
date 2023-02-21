/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:39:39 by whendrik          #+#    #+#             */
/*   Updated: 2023/02/20 21:25:07 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	if (s == NULL)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i != ft_strlen((char *)s))
	{
		ptr[i] = f(i, ptr[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr); 
}
