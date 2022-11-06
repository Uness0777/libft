/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 05:41:38 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/22 19:36:30 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void *ft_calloc(size_t count, size_t size)
{
	char *ptr = malloc(count * size);
		size_t i = 0;

	while(i < size)
	{	
		ft_bzero(ptr, size*count);
		i++;
	}
	return((void*)ptr);
}

