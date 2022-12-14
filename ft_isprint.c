/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:17:17 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/23 21:02:25 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return(1);
	return(0);
}
