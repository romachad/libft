/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:42:17 by romachad          #+#    #+#             */
/*   Updated: 2022/05/29 00:44:30 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*change;

	//change = s;
	change = (char *) s;
	i = 0;
	while (i < n)
	{
		change[i] = c;
		//s = &c;
		//change = change + sizeof(size_t);
		i++;
	}
	return (s);
}
