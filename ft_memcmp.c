/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:04:30 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/22 19:05:27 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *st1;
	unsigned char *st2;

	i = 0;
	st1 = (void *)s1;
	st2 = (void *)s2;
	while((st1[i] != '\0' || st2[i] !=  '\0') && i < n)
	{
		if(st1[i] == st2[i] )
				i++;
		else
			return(st1[i] - st2[i]);
	}
	return(0);
}
