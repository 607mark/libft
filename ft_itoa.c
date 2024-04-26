/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshabano <mshabano@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 22:19:55 by mshabano          #+#    #+#             */
/*   Updated: 2024/04/26 22:39:52 by mshabano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	s[11];
	int		i;
	char	sign;
	char	*res_string;

	i = 0;
	while (i < 11)
		s[i++] = ' ';
	if (n < 0)
	{
		sign = '-';
		n *= -1;
	}
	if (n == 0)
		return ("0");
	while (n > 0)
	{
		s[i--] = (n % 10) + '0';
		n /= 10;
	}
	res_string = (char *)malloc ((10 - i + 1) * sizeof (char));
	if (!res_string)
		return (NULL);
	if (sign == '-')
		*res_string = sign;
	while (++i < 11)
		*(res_string++) = s[i];
	return (res_string);
}
