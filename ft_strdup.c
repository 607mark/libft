/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshabano <mshabano@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:56:11 by mshabano          #+#    #+#             */
/*   Updated: 2024/04/25 18:01:38 by mshabano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	func_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

static void	*func_memcpy(void *dst, const void *src, size_t n)
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

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	len;

	len = func_strlen(s1);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	func_memcpy(p, s1, len + 1);
	return (p);
}
