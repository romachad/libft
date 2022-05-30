/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 19:57:32 by romachad          #+#    #+#             */
/*   Updated: 2022/05/29 20:50:10 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c < -128 || c > 255 || c == -1)
		return (c);
	if (c >= 'A' && c <= 'Z')
		return ((unsigned char) c + 32);
	else
		return ((unsigned char) c);
}
