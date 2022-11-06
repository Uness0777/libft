/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:44:20 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/28 14:43:04 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strchr(const char *str, int c)
{
    size_t i;
    size_t len;
    char *d;

    len = ft_strlen(str);
	d = (char *)str;;
    i = 0;
    if(!str)
        return(0);
    while(i <= len)
	{
		if (str[i] == (char)c)
			return (d + i);
        i++;
	}
	return (0);
}
