/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 23:45:15 by romachad          #+#    #+#             */
/*   Updated: 2022/06/01 01:10:36 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!(ft_strlen(big)))
		return (0);
	if (!(ft_strlen(little)))
		return ((char *) big);
	i = 0;
	while (i < len && big[i])
	{
		if (big[i] == little[0])
		{
			if (!(ft_strncmp(&big[i], little, ft_strlen(little))))
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
