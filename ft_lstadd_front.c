/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 05:26:38 by romachad          #+#    #+#             */
/*   Updated: 2022/06/29 06:40:32 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*swap;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		swap = *lst;
		*lst = new;
		new->next = swap;
	}
}
