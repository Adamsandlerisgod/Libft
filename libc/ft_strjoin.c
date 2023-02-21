/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:44:06 by whendrik          #+#    #+#             */
/*   Updated: 2023/02/20 20:23:36 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	char	*string;

	string = (char *) malloc(sizeof(char) 
		* (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (string == NULL)
		return (NULL);
	
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		string[i+j] = s2[j];
		j++;
	}
	return (string);
}
