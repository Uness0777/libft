/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:23:01 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/22 19:22:00 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 #include"libft.h"

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
