/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:01:58 by whendrik          #+#    #+#             */
/*   Updated: 2023/02/20 19:53:45 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, ft_strlen(s1));
	return (ptr);
}
/*
int	main(void)
{
	char *original = "hello world";
    char *copy = ft_strdup(original);

    printf("Original: %s\n", original);
    printf("Copy: %s\n", copy);

    free(copy);

    return 0;
}*/
