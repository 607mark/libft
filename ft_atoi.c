/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshabano <mshabano@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:01:36 by mshabano          #+#    #+#             */
/*   Updated: 2024/04/25 17:06:06 by mshabano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int				sign;
	long long int	res;

	sign = 1;
	res = 0;
	if (*str == '\0')
		return (0);
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*(str++) == '-')
			sign = -1;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
		res = res * 10 + (*(str++) - '0');
	return ((int)(res * sign));
}
