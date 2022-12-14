/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:18:50 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/24 00:47:57 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t i ;
    char *s1;

    i = 0;

    s1 = (char *)b;

    while( i < len)
    {
       s1[i] = (unsigned char )c;
       i++;
    }
    return(s1);    
}
