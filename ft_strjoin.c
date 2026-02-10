/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muracar <muracar@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:24:50 by muracar           #+#    #+#             */
/*   Updated: 2026/02/04 21:24:50 by muracar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    size_t	len1;
    size_t	len2;
    char	*joined_str;

    if (!s1 || !s2)
        return (NULL);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    joined_str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
    if (!joined_str)
        return (NULL);
    ft_strlcpy(joined_str, s1, len1 + 1);
    ft_strlcpy(joined_str + len1, s2, len2 + 1);
    return (joined_str);
}