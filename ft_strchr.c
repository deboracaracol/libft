/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaracol <dcaracol@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:16:25 by dcaracol          #+#    #+#             */
/*   Updated: 2023/04/18 12:34:28 by dcaracol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while ((s[i] != '\0') && (s[i] != (unsigned char)c))
		i++;
	if ((s[i] == (unsigned char)c) || (c == '\0'))
		return ((char *)&s[i]);
	return (0);
}
