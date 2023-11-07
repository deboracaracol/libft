/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaracol <dcaracol@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:36:23 by dcaracol          #+#    #+#             */
/*   Updated: 2023/04/19 12:12:12 by dcaracol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	s1len;
	char	*trim;

	s1len = ft_strlen(s1);
	i = 0;
	if (!set || !s1)
		return (0);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (ft_strrchr(set, s1[s1len]))
		s1len--;
	trim = ft_substr(s1, i, s1len - i + 1);
	return (trim);
}
