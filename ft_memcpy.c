/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:23:32 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/23 02:27:27 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	 char *s1;
	 char *s2;

	i = 0;
	s1 = (char *)src;
	s2 = (char *)dst;

	while(i < n)
	{
		s2[i] =  s1[i];
		i++;
	}
    return(s2);
}
