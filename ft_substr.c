/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 05:55:29 by romachad          #+#    #+#             */
/*   Updated: 2022/06/29 03:05:49 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (!*s)
		return (0);
	if (start > s_len || len == 0)
		return (ft_calloc(1, sizeof(char)));
	if (s_len >= len + start)
		substr = malloc((len + 1) * sizeof(char));
	else
		substr = malloc((s_len - start + 1) * sizeof(char));
	if (substr == 0)
		return (0);
	else if (substr && s_len >= len + start)
		ft_strlcpy(substr, &s[start], len + 1);
	else
		ft_strlcpy(substr, &s[start], (s_len - start + 1));
	return (substr);
}
