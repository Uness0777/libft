/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:48:46 by yboucha           #+#    #+#             */
/*   Updated: 2022/11/01 12:15:51 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(long nb, char *str, int *i)
{
    int idx;

    idx = *i;
    if (nb < 0)
    {
        nb *= -1;
        str[idx++] = '-';
        *i = idx;
    }
    if (nb >= 0 && nb <= 9)
        str[(*i)++] = nb + 48;
    else if (nb >= 10)
	{
		ft_putnbr(nb / 10, str, i);
		ft_putnbr(nb % 10, str, i);
	}
}

char *ft_itoa(int n)
{
    char *ptr;
    int i;
    long nb;

    i = 1;
    nb = n;
    if (nb < 0)
    {
        nb *= -1;
        i++;
    }
    while(nb > 0)
    {
        nb /= 10;
        i++;
    }
    ptr = malloc(i + 1);
	i = 0;
    ft_putnbr(n, ptr, &i);
    ptr[i] = '\0';
    return(ptr);
}



// -558