/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:20:01 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/12/15 20:31:59 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_first_position(const char *s1, const char *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int	ft_last_position(const char *s1, const char *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trim_string;
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	len;

	start = ft_first_position(s1, set);
	end = ft_last_position(s1, set);
	len = end - start;
	if (!s1 || !set)
		return (NULL);
	if (len <= 0 || start >= end)
		return (ft_strdup(""));
	trim_string = (char *) malloc((len + 1) * sizeof(char));
	if (!(trim_string))
		return (0);
	i = 0;
	while (i < len)
		trim_string[i++] = s1[start++];
	trim_string[i] = '\0';
	return (trim_string);
}

// int	main(void)
// {
// 	char	string[] = "lorem ipsum dolor sit amet";
// 	char	set1[] = "telo";
// 	printf("Original string:%s\n", string);
// 	printf("Set of character to trim:%s\n", set1);
// 	printf("Result of ft_strtrim:%s\n", ft_strtrim(string, set1));
// }
