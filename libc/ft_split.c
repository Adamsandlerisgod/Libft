/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:11:04 by whendrik          #+#    #+#             */
/*   Updated: 2023/02/20 20:29:45 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	start;
	unsigned int	end;
	char			**split;

	split = NULL;
	if (!s || !c
		|| split == (char **)malloc((count_words(s, c) + 1) * sizeof(char *)))
		return (0);
	start = 0;
	end = 0;
	i = 0;
	while (i < count_words(s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end] != '\0')
			end++;
		split[i] = ft_substr(s, start, end - start);
		start = end;
		i++;
	}
	return (split);
}	
