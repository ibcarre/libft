/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaaziz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:21:35 by ibaaziz           #+#    #+#             */
/*   Updated: 2024/11/20 16:21:40 by ibaaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_words(char const *s, char c)
{
	size_t	i;
	int	count;

	count = 0;
	i = 1;
	if (s[0] != c && s[i + 1] == c)
		count++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	return (count);
}

char	*ft_strndup(const char *s1, int n, char *dst)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	int	count;
	char	**str;
	int	i;
	int	j;

	count = count_words(s, c);
	str = malloc(count + 1 * sizeof(char));
	if (!str)
		return (NULL);
	str[count] = 0;
	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] != c)
		{
			count++;
			i++;
		}
		printf("TEST\n");
		if (count != 0)
		{
			str[j] = malloc(count + 1);
			ft_strndup(s, count, str[j]);
			printf("%s\n", str[j]);
			
		}
		count = 0;
		j++;
		i++;
	}
	return (str);
}

int main ()
{
	printf("%s\n", ft_split("      split       this for   me  !       ", ' ')[0]);
}
