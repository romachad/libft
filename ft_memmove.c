/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 07:52:30 by romachad          #+#    #+#             */
/*   Updated: 2022/05/29 08:21:37 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest2;
	char	*temp;

	//Maybe use calloc to allocate size in memory for the temp?
	ft_memcpy(temp, src, n);
	//Yes this is incomplete, temp is not pointing at anything
	dest2 = (char *) dest;
	i = 0;
	while (i < n)
	{
		dest2[i] = temp[i];
		i++;
	}
	return (dest);
}
