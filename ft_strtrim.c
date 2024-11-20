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
#include <stdio.h>

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
	char	*dst;
	size_t	trimbeg;
	size_t	i;
	size_t	trimend;
	
	if (!isset(s1[0], set) && !isset(s1[ft_strlen(s1) - 1], set))
		return (dst = ft_strdup(s1));
	trimbeg = 0;
	while (s1[trimbeg] && isset(s1[trimbeg], set))
		trimbeg++;
	if (trimbeg == ft_strlen(s1))
	{
		dst = malloc(1);
		dst[0] = '\0';
		return (dst);
	}
	trimend = ft_strlen(s1) - 1;
	while(trimend >= trimbeg && isset(s1[trimend], set))
		trimend--;
	if (trimend == trimbeg)
		trimend = ft_strlen(s1) - 1;
	dst = malloc(trimend - trimbeg + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (trimbeg <= trimend)
	{
		dst[i] = s1[trimbeg];
		trimbeg++;
		i++;
		//printf("I %zu\n", i);
	}
	dst[trimbeg] = 0;
	return (dst);
}
/*
int main()
{
	#include <stdio.h>
	char *s = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *set = " \n\t";
	printf("%s\n", ft_strtrim(s, set));
}*/
