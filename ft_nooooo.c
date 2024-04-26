/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshabano <mshabano@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 22:11:30 by mshabano          #+#    #+#             */
/*   Updated: 2024/04/26 22:33:58 by mshabano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t count_words(char const *s, char c)
{
	size_t	n;

	n = 0;
	if (*s = '\0')
		return (n);
	while (*s)
	{
		if (*s == c)
			n++;
		else if (*s == '\0')
		{
			n++;
			break;
		}
		s++;
	}
	return (n);
}


char **ft_split(char const *s, char c)
{
	size_t	n;
	char	**arr;
	n = count_words(s, c);
	return (NULL);
}
