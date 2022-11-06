/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:54:00 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/28 22:22:34 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *st;
    size_t l_s;
    unsigned char cc;

    i = 0;
    st = (unsigned char *)s;
    cc = (unsigned char)c;
    l_s = ft_strlen(s);
        
    if (!n || !s || !cc)
        return(NULL);
    while(i < n && st[i])
    {
            if(st[i] == cc)
                return(st + i);
              i++;
     }
     return(NULL);
}
