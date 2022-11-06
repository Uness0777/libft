/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:57:16 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/22 19:35:31 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char *ft_sbstr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *ptr;

	i = 0;
	ptr = malloc(ft_strlen(s) + 1);

	while(i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return(ptr);
}

static int fun(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if(set[i] == c)
			return(1);
		i++;
	}
	return(0);
}
char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	char *set1;


	i = 0;
	set1 = (char *)set;

	while(s1[i] && fun(s1[i], set1) == 1)
	{
		i++;
	}
	j = ft_strlen(s1) - 1;
	while(j > i && fun(s1[j], set1))
	{
		j--;
	}
	return ft_sbstr(s1, i, j - i + 1);
}
