/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 04:01:41 by romachad          #+#    #+#             */
/*   Updated: 2022/06/15 06:50:25 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_char(char const *s, char c)
{
	char	*addr;
	size_t	counter;

	addr = ft_strchr(s, c);
	if (addr)
		counter = 1;
	else
		return (0);
	while (addr)
	{
		addr = ft_strchr(&addr[1], c);
		if (addr)
			counter++;
	}
	return (counter);
}

static char	**make_array(char const *s, char c, size_t count)
{
	char	**array;
	char	*start_addr;
	char	*end_addr;
	size_t	i;

	array = (char **) malloc((count + 1) * sizeof(char *));
	if (!array)
		return (0);
	i = 0;
	start_addr = (char *) s;
	while (i <= count)
	{
		end_addr = ft_strchr(start_addr, c);
		if (end_addr)
			array[i] = ft_substr(start_addr, 0, (end_addr - start_addr) + 1);
		else
			array[i] = ft_substr(start_addr, 0, (ft_strlen(start_addr)));
		start_addr = end_addr + 1;
		i++;
	}
	return (array);
}

/*Need to implement some sanity check,
 *  to free in case there were errors of allocation...*/
char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	count;
	char	**array;

	len = ft_strlen(s);
	if (!len || c == 0)
		return (0);
	count = count_char(s, c);
	if (count == 0)
	{
		array = (char **) malloc((1) * sizeof(char *));
		if (!array)
			return (0);
		array[0] = ft_strdup(s);
		return (array);
	}
	else
	{
		array = make_array(s, c, count);
		return (array);
	}
}
