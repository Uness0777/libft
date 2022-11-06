/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:02:33 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/09 15:25:28 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char *ft_strrch(const char *s, int c)
{
	int i;
	char *str;

	i = 0;
	str = (char *)s;
	while(str[i])
		i++;
	i--;
	while (str[i] != '\0')
	{	
		if(str[i] == c)
			return(str + i);
		i--;
	}
	return (0);
}
