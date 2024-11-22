/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaaziz <ibaaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:21:35 by ibaaziz           #+#    #+#             */
/*   Updated: 2024/11/22 18:53:57 by ibaaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	size_t	i;
	int		count;

	count = 0;
	i = 1;
	if (s[0] != c && s[0])
	{
		count++;
		while (s[i] && s[i] != c)
			i++;
	}
	while (s[i] && s[0])
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

void	initialize(int *i, int *j, int *chars, char *str)
{
	if (str[0] == 'z')
		*i = 0;
	else if (str[0] == 'i')
		*i = *i + 1;
	if (str[1] == 'z')
		*j = 0;
	else if (str[1] == 'i')
		*j = *j + 1;
	if (str[2] == 'z')
		*chars = 0;
	else if (str[2] == 'i')
		*chars = *chars + 1;
}

char	**inputting(char const *s, char c, char **str)
{
	int		i;
	int		j;
	int		chars;

	initialize(&i, &j, &chars, "zzz");
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			str[j][chars] = s[i];
			chars++;
			i++;
		}
		initialize(&i, &j, &chars, "siz");
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		chars;

	str = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[count_words(s, c)] = NULL;
	initialize(&i, &j, &chars, "zzz");
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			initialize(&i, &j, &chars, "isi");
		if (chars > 0)
		{
			str[j] = ft_calloc(chars + 1, sizeof(char));
			if (!str[j])
				return (NULL);
		}
		initialize(&i, &j, &chars, "siz");
	}
	return (inputting(s, c, str));
}

/*
int main()
{
	ft_split("      a    a ", ' ');
}*/
