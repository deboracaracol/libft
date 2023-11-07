/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaracol <dcaracol@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:50:28 by dcaracol          #+#    #+#             */
/*   Updated: 2023/04/18 17:27:01 by dcaracol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	cat = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!cat)
		return (0);
	while (s1[i] != '\0')
	{
		cat[k] = s1[i];
		k++;
		i++;
	}
	while (s2[j] != '\0')
	{
		cat[k] = s2[j];
		k++;
		j++;
	}
	cat[k] = '\0';
	return (cat);
}
