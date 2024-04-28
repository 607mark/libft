/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshabano <mshabano@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:15:42 by mshabano          #+#    #+#             */
/*   Updated: 2024/04/28 23:17:01 by mshabano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*count_alloc_sign_terminate(long long int new, int *num)
{
	int		sign;
	char	*str;

	sign = 0;
	if (new < 0)
	{
		sign++;
		new *= -1;
	}
	if (new == 0)
		(*num)++;
	while (new > 0)
	{
		(*num)++;
		new /= 10;
	}
	str = (char *)malloc (sign + *num + 1);
	if (!str)
		return (NULL);
	if (sign > 0)
		str[0] = '-';
	str[sign + *num] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char					*res_string;
	long long int			new;
	int						num;

	new = n;
	num = 0;
	res_string = count_alloc_sign_terminate(new, &num);
	if (!res_string)
		return (NULL);
	if (new == 0)
	{
		res_string[0] = '0';
		return (res_string);
	}
	if (n < 0)
		new *= -1;
	if (res_string[0] != '-')
		num--;
	while (new > 0)
	{
		res_string[num--] = (new % 10) + '0';
		new /= 10;
	}
	return (res_string);
}
