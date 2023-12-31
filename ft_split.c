/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:18:48 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/12/17 19:44:19 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(const char *str, char chr)
{
	size_t	word;
	size_t	i;
	size_t	len;

	len = ft_strlen(str);
	if (!str)
		return (0);
	word = 0;
	i = 0;
	while (str[i])
	{
		if ((i == 0 || str[i -1] == chr) && str[i] != chr)
			word++;
		i++;
	}
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	res = (char **) malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!res || !s)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > start)
		{
			res[j] = ft_substr(s, start, i - start);
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}

// int	main(void)
// {
// 	char	string[] = "xxxxxxxxhello!";
// 	char	c ='x';
// 	int		i;
// 	char	**result = ft_split(string, c);

// 	printf("Count of words: %d\n", word_count(string, c));
// 	printf("Original array: %s\t & delimiter; %c\n", string, c);
// 	i = 0;
// 	while (result[i] != NULL)
// 	{
// 		printf("Array of elements [%d]: %s\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }