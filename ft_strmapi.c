/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 10:53:56 by hualei            #+#    #+#             */
/*   Updated: 2026/11/09 10:53:58 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static void	fill_string(char *new_str, char const *s, char (*f)(unsigned int,
			char))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		new_str[i] = f((unsigned int)i, s[i]);
		i++;
	}
	new_str[i] = '\0';
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new_str = malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	fill_string(new_str, s, f);
	return (new_str);
}
