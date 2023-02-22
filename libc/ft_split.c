/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:11:04 by whendrik          #+#    #+#             */
/*   Updated: 2023/02/22 20:20:56 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strings(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	if (!s)
		return (count);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
			if (s[i] == '\0')
				return (count);
		}	
		i++;
	}
	return (count);
}

static char	**stringsorter(char **split, char c, size_t i, char const *s)
{
	unsigned int	start;
	unsigned int	end;

	start = 0;
	end = 0;
	while (i < count_strings(s, c))
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

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	char			**split;

	split = (char **)malloc(sizeof(char *) * (count_strings(s, c) + 1));
	if (!s || !c || !split)
		return (0);
	split[count_strings(s, c)] = 0;
	i = 0;
	stringsorter(split, c, i, s);
	return (split);
}
