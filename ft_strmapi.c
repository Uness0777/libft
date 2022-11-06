/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:40:11 by yboucha           #+#    #+#             */
/*   Updated: 2022/11/02 10:40:22 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *ptr;
    
    if (!s || !f)
        return (0);
    i = 0; 
    ptr = malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!ptr)
        return (0);
    while(s[i])
    {
        ptr[i] = (*f)(i, s[i]);
        i++;
    }
    ptr[i] = '\0';
    return(ptr);
}