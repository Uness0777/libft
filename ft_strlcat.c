/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboucha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:15:53 by yboucha           #+#    #+#             */
/*   Updated: 2022/10/29 22:43:51 by yboucha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	j = 0;
	len_src = ft_strlen(src);
	i = 0;
	if (len_dst >= dstsize || dstsize == 0)
		return (len_src + dstsize);
	while (src[j] != '\0' && i < dstsize - len_dst - 1)
	{
		dst[i + len_dst] = src[j];
		i++;
		j++;
	}
	dst[i + len_dst] = 0;
	return (len_dst + len_src);
}
