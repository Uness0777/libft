/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:43:53 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/28 21:15:47 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;
    size_t len_src = ft_strlen(src);
	
    if(!(dst || src))
        return(dstsize);
    if(!dstsize)
		return(len_src);
	else if
		(src == '\0')
			return(0);
	 else 
         while(i <  dstsize - 1 && src[i])
		{
		 dst[i] = src[i];
		 i++;
		}
        dst[i] = '\0';
	    return(len_src);
}

//int main()
//{
  //  char dest[20];
   // char src[10] = "youness";
   // printf("%zu", ft_strlcpy(dest, src, 11));
//}
