/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muracar <muracar@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:25:26 by muracar           #+#    #+#             */
/*   Updated: 2026/02/17 01:57:42 by muracar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char delimiter)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		while (str[i] == delimiter)
			i++;
		if (str[i])
		{
			word_count++;
			while (str[i] && str[i] != delimiter)
				i++;
		}
	}
	return (word_count);
}

static void	free_words(char **words, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

static int	check_alloc(char **words, int word)
{
	if (!words[word])
	{
		free_words(words, word);
		return (0);
	}
	return (1);
}

static char	**get_str(char **words, int word, char const *s, char c)
{
	int		i;
	size_t	start;
	size_t	end;

	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = (size_t)i;
		while (s[i] && s[i] != c)
			i++;
		end = (size_t)i;
		if (end > start)
		{
			words[word] = ft_substr(s, (unsigned int)start, end - start);
			if (!check_alloc(words, word))
				return (NULL);
			word++;
		}
	}
	words[word] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	if (!s)
		return (NULL);
	words = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	if (!get_str(words, 0, s, c))
		return (NULL);
	return (words);
}
