/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaracol <dcaracol@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:53:04 by dcaracol          #+#    #+#             */
/*   Updated: 2023/04/17 12:05:08 by dcaracol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	c;

	a = 0;
	b = 0;
	c = 0;
	while (dst[a])
		a++;
	while (src[b])
		b++;
	if (size <= a)
		b = b + size;
	else
		b = b + a;
	while (src[c] && (a + 1) < size)
	{
		dst[a] = src[c];
		a++;
		c++;
	}
	dst[a] = '\0';
	return (b);
}
