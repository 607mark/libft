/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshabano <mshabano@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:18:48 by mshabano          #+#    #+#             */
/*   Updated: 2024/04/26 19:40:16 by mshabano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*f_memcpy(void *dst, const void *src, size_t n)
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

static size_t	f_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = f_strlen(s1);
	len_s2 = f_strlen(s2);
	if (len_s1 + len_s2 == 0)
	{
		p = (char *)malloc(1 * sizeof (char));
		if (!p)
			return (NULL);
		*p = '\0';
		return (p);
	}
	p = (char *) malloc((len_s1 + len_s2 + 1) * sizeof (char));
	if (!p)
		return (NULL);
	f_memcpy(p, s1, len_s1);
	f_memcpy(p + len_s1, s2, len_s2 + 1);
	return (p);
}
