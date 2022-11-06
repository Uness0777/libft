/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:57:44 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/28 18:00:03 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

unsigned long long ft_min(unsigned long long x, unsigned long long y)
{
    if (x < y)
        return (x);
    return (y);
}
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *ptr;

	i =  0;
    if(!s)
        return (NULL);
    if ( start >= ft_strlen(s))
        return (ft_strdup(""));
    else if(!s )
        return (NULL);
    ptr =(char *)malloc(sizeof(char) * ( 1 + ft_min(ft_strlen(s) - start, len)));
    if(!ptr)
        return(NULL);
	while( i < len && s[start + i] )
	{
		ptr[i] = s[start + i];
		i++;
	}
    ptr[i] = '\0';
	return(ptr);
}
/*#include<stdio.h>
int main()
{
    char st[] = "youness";
    printf("%s", ft_substr(st, 3, 7));
}*/

