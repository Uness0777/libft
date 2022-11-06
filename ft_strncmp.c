/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:29:04 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/27 22:24:41 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
    unsigned char *d1;
    unsigned char *d2;

    d1 = (unsigned char *)s1;
    d2 = (unsigned char *)s2;
	i = 0;
	while ((d1[i] != '\0' || d2[i] != '\0') && i < n)
	{
		if (d1[i] != d2[i])
			return(d1[i] - d2[i]);
		i++;
	}
	return(0);
}
