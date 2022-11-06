/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 21:14:18 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/29 19:52:38 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	unsigned long nb;
	unsigned long t;

	i = 0;
	sign = 1;
	nb = 0;
	if((str[i] <= 9 && str[i] >= 13 )|| str[i] == 32 )
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
            sign = sign * (-1);
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		t = nb *10 + (str[i++] - 48);
		if(t > 9223372036854775807 && sign < 0)
			return(0);
		if(t > 9223372036854775807 && sign > 0)
			return(-1);
		nb = t;
	}
    return(nb * sign);
}