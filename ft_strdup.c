/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:02:05 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/28 00:00:00 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char    *ft_strdup(const char *s1)
{
    char *dst;
    int i;

    i = 0;
    dst = malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if(!dst)
        return(NULL);
    while(s1[i])
    {
        dst[i] = s1[i];
        i++;
    }
    dst[i] = '\0';
    return(dst);
}
