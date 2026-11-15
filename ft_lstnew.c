/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 22:21:05 by hualei            #+#    #+#             */
/*   Updated: 2026/11/15 20:21:34 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @fn t_list *ft_lstnew(void *content)
 * Returns a new list element with the content passed as param.
 * @param content the content to add to the list element
 * @return t_list*
 * @retval pointer to a new list element
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
