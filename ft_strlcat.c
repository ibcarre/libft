/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaaziz <ibaaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:12:43 by ibaaziz           #+#    #+#             */
/*   Updated: 2024/11/17 18:28:53 by ibaaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (dstsize <= ft_strlen(dst) || dstsize == 0)
		return (ft_strlen(src) + dstsize);
	while (dst[i] && dstsize > 0)
	{
		i++;
		dstsize--;
	}
	if (ft_strlen(src) + 1 > dstsize)
		dst[i + dstsize] = '\0';
	while(dstsize > 0 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
		dstsize--;
	}

	return (ft_strlen(src) + ft_strlen(dst));
}
