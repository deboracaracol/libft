/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaracol <dcaracol@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:26:09 by dcaracol          #+#    #+#             */
/*   Updated: 2023/05/04 12:02:55 by dcaracol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_words(char const *s, char c)
{
	unsigned int	i;
	unsigned int	words;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

int	ft_countchar(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char	**ft_mall(char const *s, char c, unsigned int words, char **array)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	ct;

	ct = 0;
	while (ct < words)
	{
		i = 0;
		while (s[i] != '\0' && s[i] == c)
			i++;
		s = s + i;
		len = ft_countchar((char *)s, c);
		array[ct] = ft_substr((char *)s, 0, len);
		if (array[ct] == 0)
			return (NULL);
		s = s + len;
		ct++;
	}
	array[ct] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	words;
	char			**array;

	if (!s)
		return (NULL);
	if (s[0] == '\0')
	{
		array = (char **)malloc(sizeof(char *));
		array[0] = NULL;
		return (array);
	}
	words = ft_words((char *)s, c);
	array = (char **)malloc((words + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array = ft_mall((char *)s, c, words, array);
	return (array);
}

/*int main(void)
{
    char const *s = "";
    char c = 'z';
    char **result = ft_split(s, c);
    
    if (!result)
    {
        printf("Error: failed to split string.\n");
        return (1);
    }
    
    for (int i = 0; result[i] != NULL; i++)
    {
        printf("%s\n", result[i]);
        free(result[i]);
    }

    free(result);

    return (0);
}*/