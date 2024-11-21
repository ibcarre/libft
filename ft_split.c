/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaaziz <ibaaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:21:35 by ibaaziz           #+#    #+#             */
/*   Updated: 2024/11/21 21:50:01 by ibaaziz          ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	int	count;
	char	**str;
	int	i;
	int	j;
	int	chars;

	count = count_words(s, c);
	str = malloc(count + 1 * sizeof(char));
	if (!str)
		return (NULL);
	str[count] = 0;
	printf("%i\n", count);
	chars = 0;
	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			chars++;
			i++;
		}
		str[j] = ft_calloc(sizeof(char), chars + 1);
		printf("lettres %s\n", str[j]);
		if (!str[j])
			return (NULL);
		j++;
		chars = 0;
		while (s[i] == c)
			i++;
	}
	i = 0;
	j = 0;
	chars = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			printf("char %c\n", s[i]);
			printf("CHARS %i\n", chars);
			str[j][chars] = s[i];
			chars++;
			i++;
		}
		printf("%s\n", str[j]);
		while (s[i] == c)
			i++;
		j++;
		chars = 0;
	}
	return (str);
}

int main ()
{
	printf("%s\n", ft_split(" b o n    j    ou      r", ' ')[0]);
}
