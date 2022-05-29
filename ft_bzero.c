/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 06:58:03 by romachad          #+#    #+#             */
/*   Updated: 2022/05/29 07:03:52 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	bzero(void *s, size_t n)
{
	size_t	i;
	char	*replace;

	replace = (char *) s;
	i = 0;
	while (i < n)
	{
		replace[i] = 0;
		i++;
	}
}
