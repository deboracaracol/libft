/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaracol <dcaracol@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:10:26 by dcaracol          #+#    #+#             */
/*   Updated: 2023/05/15 16:08:04 by dcaracol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	j = 0;
	if (start >= ft_strlen(s) || !s || !len)
	{
		sub = malloc(1 * sizeof(char));
		sub[0] = '\0';
		return (sub);
	}
	while (s[start + j] != '\0' && j < len)
		j++;
	sub = malloc(j * sizeof(char) + 1);
	if (!sub)
		return (0);
	while (s[start] != '\0' && j > i)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
