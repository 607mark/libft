/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshabano <mshabano@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 22:11:30 by mshabano          #+#    #+#             */
/*   Updated: 2024/04/27 19:34:08 by mshabano         ###   ########.fr       */
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
		if (*s)
		{
			if (!ft_strchr(s, c))
				w_len = ft_strlen(s);
			else
				w_len = ft_strchr(s, c) - s;
			arr[i] = ft_substr(s, 0, w_len);
			s += w_len;
			i++;
		}
	}
	arr[i] = 0;
	return (arr);
}
