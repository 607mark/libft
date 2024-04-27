/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshabano <mshabano@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 22:11:30 by mshabano          #+#    #+#             */
/*   Updated: 2024/04/27 22:49:18 by mshabano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	n;

	if (!(*s))
		return (0);
	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			n++;
		while (*s != c && *s)
			s++;
	}
	return (n);
}

static char	**free_arr(char **arr, int i)
{
	int	n;

	n = 0;
	while (n < i)
	{
		free(arr[n]);
		n++;
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	w_len;
	int		i;

	arr = (char **)malloc ((count_words(s, c) + 1) * sizeof (char *));
	if (!s || !arr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!*s)
			break ;
		if (!ft_strchr(s, c))
			w_len = ft_strlen(s);
		else
			w_len = ft_strchr(s, c) - s;
		arr[i++] = ft_substr(s, 0, w_len);
		if (!(arr + i))
			return (free_arr(arr, i));
		s += w_len;
	}
	arr[i] = 0;
	return (arr);
}
