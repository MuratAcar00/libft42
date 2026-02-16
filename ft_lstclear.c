/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muracar <muracar@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:29:27 by muracar           #+#    #+#             */
/*   Updated: 2026/02/16 11:29:27 by muracar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list	*current;
    t_list	*next;

    if (!lst || !del)
        return ;
    current = *lst;
    while (current)
    {
        next = current->next;
        ft_lstdelone(current, del);
        current = next;
    }
    *lst = NULL;
}
