/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahiaelboukili <yahiaelboukili@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:47:14 by yahiaelbouk       #+#    #+#             */
/*   Updated: 2024/10/24 21:39:25 by yahiaelbouk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *s, char c)
{
	int	count;
	int	i;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

int	ft_wordsize(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!str || !*str)
		return (0);
	while (str[i] == c)
		i++;
	while (str[i] && str[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		word_nb;
	char	**table;
	int		word_size;
	int		i;
	int		j;

	word_nb = ft_wordcount(s, c);
	if (!(table = (char **)malloc((word_nb + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	while (j < word_nb)
	{
		while (s[i] && s[i] == c)
			i++;
		word_size = ft_wordsize(&s[i], c);
		if (!(table[j] = malloc((word_size + 1) * sizeof(char))))
		{
			int k;

			k = 0;
			while (k < j)
				free(table[k++]);
			free(table);
			return (NULL);
		}
		ft_strncpy(table[j], &s[i], word_size);
		table[j][word_size] = '\0';
		i += word_size;
		j++;
	}
	table[j] = NULL;
	return (table);
}
