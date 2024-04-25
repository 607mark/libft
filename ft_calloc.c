/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshabano <mshabano@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:45:31 by mshabano          #+#    #+#             */
/*   Updated: 2024/04/25 17:55:20 by mshabano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	func_bzero(void *s, size_t n)
{
	char	*temp_s;

	temp_s = (char *)s;
	while (n > 0)
	{
		*(temp_s++) = 0;
		n--;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	bytes;
	void	*p;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	bytes = count * size;
	p = malloc(bytes);
	if (!p)
		return (NULL);
	else
		func_bzero(p, bytes);
	return (p);
}
