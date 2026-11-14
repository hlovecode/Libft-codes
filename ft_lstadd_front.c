/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 17:43:28 by hualei            #+#    #+#             */
/*   Updated: 2026/11/14 18:07:33 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int main(void)
{
    t_list *lst;
    t_list *new;

    lst = NULL;

    lst = malloc(sizeof(t_list));
    lst->content = "10";
    lst->next = NULL;

    new = malloc(sizeof(t_list));
    new->content = "5";
    new->next = NULL;

    ft_lstadd_front(&lst, new);

    printf("%s\n", (char *)lst->content);
    printf("%s\n", (char *)lst->next->content);

    free(new);
    free(lst);
    return (0);
}*/
