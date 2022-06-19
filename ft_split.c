/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 02:35:00 by romachad          #+#    #+#             */
/*   Updated: 2022/06/19 05:50:28 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_char(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	while (s[i] == c)
		i++;
	count = 0;
	while (s[i] != 0 && i < ft_strlen(s))
	{
		while (s[i] == c && s[i + 1] == s[i])
			i++;
		if (s[i] == c && s[i + 1] != 0)
		{
			count++;
		}
		i++;
	}
	return (count);
}

static void	free_array(char **array, size_t i)
{
	while (i > 0)
	{
		free(array[i]);
		i--;
	}
	free(array[i]);
	free(array);
}

char	**make_array(char **array, size_t count, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	size = 0;
	while (s[i] != 0 && i < ft_strlen(s) && j < count + 1)
	{
		while (s[i] == c && s[i] != 0)
			i++;
		while (s[i] != c && s[i] != 0)
		{
			size++;
			i++;
		}
		array[j] = ft_substr(&s[i - size], 0, size);
		if (array[j] == 0)
			free_array(array, j);
		size = 0;
		j++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**array;

	if (s[0] == 0 || c == 0)
		return (0);
	count = count_char(s, c);
	array = (char **) malloc((count + 1) * sizeof(char *));
	if (!array)
		return (0);
	else
		return (make_array(array, count, s, c));
}
