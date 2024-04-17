/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshabano <mshabano@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:03:30 by mshabano          #+#    #+#             */
/*   Updated: 2024/04/17 20:20:19 by mshabano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	s;
	char	*ori_dst;

	s = 0;
	ori_dst = dst;
	while (*src)
			s++;
	if (!dstsize)
		return (s);
	while(--dstsize >= 0 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (s);
}
