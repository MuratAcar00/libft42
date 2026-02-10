/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muracar <muracar@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:25:26 by muracar           #+#    #+#             */
/*   Updated: 2026/02/04 21:25:26 by muracar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Kelime sayısını bulur
static int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

// Bellek hatası olursa açılan tüm alanları temizler (Kritik!)
static char	**free_all(char **lst, int i)
{
	while (i > 0)
		free(lst[--i]);
	free(lst);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		start;

	if (!s) return (NULL);
	res = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res) return (NULL);
	i = 0;
	j = 0;
	while (j < count_words(s, c))
	{
		while (s[i] == c) i++;
		start = i;
		while (s[i] && s[i] != c) i++;
		res[j] = ft_substr(s, start, i - start); // Kendi substr fonksiyonun
		if (!res[j]) return (free_all(res, j));
		j++;
	}
	res[j] = NULL;
	return (res);
}