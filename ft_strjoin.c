/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 00:28:54 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/22 18:59:28 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *ptr;
	char *d;
	char *s;
	int j = 0;
	int i = 0;

	d = (char *)s1;
	s = (char *)s2;
	ptr = (char *)malloc(sizeof(char) * (strlen(s) + strlen(d) + 1));

	while(d[i])
	{
		ptr[i] = d[i];
		i++;
	}
	while(s[j])
	{
		ptr[i + j] = s[j];
	    j++;
	}
	return(ptr);
}
