/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muracar <muracar@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 21:03:48 by muracar           #+#    #+#             */
/*   Updated: 2026/01/30 21:14:12 by muracar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t sz)
{
	size_t	i;
	
	i = 0;
	while (src[i])
	{
		i++;
	}
	if (!sz)
	{
		return (i);
	}
	while (--sz && *src)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (i);
}