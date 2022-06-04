/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 03:45:20 by romachad          #+#    #+#             */
/*   Updated: 2022/06/03 05:59:07 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (nmemb == 0 || size == 0)
		return (0);
//	else if ((nmemb * size) > 2147483647)
//		return (0);
	else
	{
		mem = malloc(nmemb * size);
		//ft_bzero(mem, (nmemb * size));
		ft_memset(mem, '\0', (nmemb *size));
		return (mem);
	}
	return (0);
}
