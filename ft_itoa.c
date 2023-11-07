/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaracol <dcaracol@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:06:39 by dcaracol          #+#    #+#             */
/*   Updated: 2023/04/20 13:29:47 by dcaracol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	else if (n == 0)
		return (1);
	while ((unsigned int)n > 0)
	{
		len++;
		n = (unsigned int)n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		len;

	len = ft_len(n);
	itoa = malloc((len + 1) * sizeof(char));
	if (itoa == NULL)
		return (NULL);
	if (n < 0)
	{
		itoa[0] = '-';
		n *= -1;
	}
	if (n == 0)
		itoa[0] = '0';
	itoa[len] = '\0';
	while (len >= 0 && (unsigned int)n > 0)
	{
		itoa[len - 1] = ((unsigned int)n % 10) + 48;
		n = (unsigned int)n / 10;
		len--;
	}
	return (itoa);
}
