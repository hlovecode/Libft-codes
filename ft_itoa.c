/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 10:52:42 by hualei            #+#    #+#             */
/*   Updated: 2026/11/14 08:43:54 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	get_magnitude(int n)
{
	long	num;

	num = n;
	if (num < 0)
		num = -num;
	return (num);
}

static int	get_len(long n)
{
	int	len;

	len = 1;
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	fill_digits(char *str, long n, int len)
{
	int	i;

	i = len - 1;
	while (i >= 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	int		sign;
	char	*str;

	num = get_magnitude(n);
	len = get_len(num);
	sign = (n < 0);
	str = malloc(len + sign + 1);
	if (!str)
		return (NULL);
	if (sign)
		str[0] = '-';
	fill_digits(str + sign, num, len);
	str[len + sign] = '\0';
	return (str);
}
