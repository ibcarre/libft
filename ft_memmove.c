/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaaziz <ibaaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:57:09 by ibaaziz           #+#    #+#             */
/*   Updated: 2024/11/17 13:39:58 by ibaaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	unsigned char	*strd;
	unsigned char	*strs;

	strd = (unsigned char *) dst;
	strs = (unsigned char *) src;
	if (src <= dst)
	{
		i = len - 1;
		while (i >= 0)
		{
			strd[i] = strs[i];
			i--;
		}
		return (dst);
	}
	i = 0;
	while (i < len)
	{
		strd[i] = strs[i];
		i++;
	}
	return (dst);
}
