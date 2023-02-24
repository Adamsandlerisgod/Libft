/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:19:39 by whendrik          #+#    #+#             */
/*   Updated: 2023/02/24 13:50:46 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!new)
		return (NULL);
	node = *lst;
	if (node)
	{
		ft_lstlast(node);
		node = new;
	else
		node = new;
}

	
