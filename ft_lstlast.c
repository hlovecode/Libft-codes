/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 18:21:51 by hualei            #+#    #+#             */
/*   Updated: 2026/11/14 18:24:46 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
        return (NULL);
    while (lst->next)
        lst = lst->next;
    return (lst);
}

/*
#include <stdio.h>

int main(void)
{
    t_list *lst;
    t_list *node2;
    t_list *node3;
    t_list *last;

    lst = malloc(sizeof(t_list));
    node2 = malloc(sizeof(t_list));
    node3 = malloc(sizeof(t_list));

    if (!lst || !node2 || !node3)
        return (1);

    lst->content = "10";
    lst->next = node2;

    node2->content = "20";
    node2->next = node3;

    node3->content = "30";
    node3->next = NULL;

    last = ft_lstlast(lst);

    printf("Last node content: %s\n", (char *)last->content);

    free(node3);
    free(node2);
    free(lst);

    return (0);
}*/
