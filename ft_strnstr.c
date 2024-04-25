/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshabano <mshabano@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:00:20 by mshabano          #+#    #+#             */
/*   Updated: 2024/04/23 16:57:43 by mshabano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!(haystack) && !(needle))
		return (NULL);
	if (!(needle))
		return ((char *)haystack);
	while (*haystack && len--)
	{
		i = 0;
		while (*(haystack + i) == *(needle + i) && *(needle + i) && i <= len)
		{
			if (!*(needle + i + 1))
				return ((char *)haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}
