/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaaziz <ibaaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:18:00 by ibaaziz           #+#    #+#             */
/*   Updated: 2024/11/19 20:38:15 by ibaaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	isset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	// trouver trim debut puis trim fin check si c le meme
	size_t	trimbeg;
	size_t	trimend;
	size_t	i;
	char	*dst;

	i = 0;
	while (isset(s1[i], set) && s1[i])
		i++;
	if (i == ft_strlen(s1))
	{
		dst = malloc(ft_strlen(s1) + 1 * sizeof(char));
		return (dst);
	}
	trimbeg = i;
	printf("trimbeg %zu\n", trimbeg);
	i = ft_strlen(s1) - 1;
	while (isset(s1[i], set) && i >= 0)
		i--;
	trimend = i;
	if (trimbeg == trimend)
		trimend = ft_strlen(s1);
	printf("trimend %zu\n", trimend);
	dst = malloc(((trimend - trimbeg) + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (trimbeg <= trimend)
	{
		dst[i] = s1[trimbeg];
		i++;
		trimbeg++;
	}
	printf("trimbeg %zu\n", trimbeg);
	dst[i] = '\0';
	return (dst);
}

/*
int main()
{
	printf("%s", ft_strtrim("    hel  lo    ", " o"));
}*/
//3
//9
//    hello
//0123456789
