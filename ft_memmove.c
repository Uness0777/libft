/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:15:55 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/26 10:42:24 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *s;
	char *d;
    size_t len_src;

	i = 0;
	s = ( char *)src;
    d = ( char *)dst;
    len_src = strlen(src);
    
    if (!(d && s))
        return(s);
	if (s > d)
    {
	    while(len > 0)
		{
			    *d++ = *s++;
                len--;
		}
    }
    else
    {
        d += len;
        s += len;
        while(len > 0)
	    {
	        *--d = *--s;
		    len--;
	    }
    }
    return(dst);
}
//#include<stdio.h>
//#include<string.h>
  //  int main() 
//{
 // char src[] = "youness";
 // printf("mine ; %s\n", ft_memmove(src + 1 , src, 7));
  // char src3[] = "youness";
  // printf("%s", memmove(src3 + 1, src3, 7));
//}
