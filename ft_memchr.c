/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 01:02:50 by romachad          #+#    #+#             */
/*   Updated: 2022/05/30 01:58:54 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*comp;
	size_t			i;

	if (c > 255)
		return (0);
	comp = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (((unsigned char) comp[i]) == ((unsigned char) c))
			return (&comp[i]);
		i++;
	}
	return (0);
}
