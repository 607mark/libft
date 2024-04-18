/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshabano <mshabano@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:54:08 by mshabano          #+#    #+#             */
/*   Updated: 2024/04/18 16:46:36 by mshabano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dst_len;
	size_t		len;
	const char	*s;
	
	if ((!src || !dst) && (!dstsize)
			return (0);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		return(


}
