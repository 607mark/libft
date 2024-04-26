/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshabano <mshabano@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:58:56 by mshabano          #+#    #+#             */
/*   Updated: 2024/04/26 20:06:53 by mshabano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	func_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

void	*func_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*original_dst;

	if (!dst && !src)
		return (dst);
	original_dst = dst;
	while (n > 0)
	{
		*(unsigned char *)dst++ = *(unsigned char *)src++;
		n--;
	}
	return (original_dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;

	if (func_strlen(s + start) < len)
		len = func_strlen(s + start);
	if (func_strlen(s) < start || (func_strlen(s) == 0))
	{
		sub_s = (char *)malloc ((1) * sizeof (char));
		if (!sub_s)
			return (NULL);
		*sub_s = '\0';
		return (sub_s);
	}
	sub_s = (char *)malloc ((len + 1) * sizeof(char));
	if (!sub_s)
		return (NULL);
	if (len == 0)
	{
		sub_s[0] = '\0';
		return (sub_s);
	}
	func_memcpy(sub_s, s + start, len);
	sub_s[len] = '\0';
	return (sub_s);
}
