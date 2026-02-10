/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muracar <muracar@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:21:31 by muracar           #+#    #+#             */
/*   Updated: 2026/02/04 21:21:31 by muracar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t	substr_len;
    char	*substr;

    if (!s)
        return (NULL);
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    substr_len = ft_strlen(s + start);
    if (substr_len > len)
        substr_len = len;
    substr = (char *)malloc(sizeof(char) * (substr_len + 1));
    if (!substr)
        return (NULL);
    ft_strlcpy(substr, s + start, substr_len + 1);
    return (substr);
}