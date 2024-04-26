/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshabano <mshabano@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:19:01 by mshabano          #+#    #+#             */
/*   Updated: 2024/04/26 21:15:53 by mshabano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	str_len(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

static int	checker(const char *s1, const char *set)
{
	while (*set != '\0')
	{
		if (*s1 == *set)
			return (1);
		else
			set++;
	}
	return (0);
}

static char	*make_str(const char *s1, size_t start, size_t len)
{
	char	*s;
	size_t	i;

	if (len <= 0 || start >= str_len(s1 + 1))
		return (ft_strdup(""));
	s = ft_calloc(len + 1, 1);
	if (!s)
		return (NULL);
	i = 0;
	while (i < len)
		*(s + i++) = *(s1 + start++);
	return (s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new_str;

	if (!s1)
		return (NULL);
	start = 0;
	end = str_len(s1) - 1;
	while (checker((s1 + start), set))
		start++;
	while (checker((s1 + end), set))
		end--;
	end++;
	new_str = make_str(s1, start, end - start);
	return (new_str);
}
