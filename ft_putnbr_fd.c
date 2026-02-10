/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muracar <muracar@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:30:59 by muracar           #+#    #+#             */
/*   Updated: 2026/02/04 21:30:59 by muracar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
    long	num;

    num = n;
    if (num < 0)
    {
        ft_putchar_fd('-', fd);
        num = -num;
    }
    if (num >= 10)
        ft_putnbr_fd(num / 10, fd);
    ft_putchar_fd((num % 10) + '0', fd);
}