/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:05:23 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/12/08 12:18:09 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = 0;
	j = 0;
	s = NULL;
	if (!(needle[j]))
		return ((char *) haystack);
	while (i < len && haystack[i])
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *) haystack + i);
		}
		i++;
		j = 0;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s[] = "lorem ipsum dolor sit amet";
// 	char	c[] = "ipsumm";

// 	printf("s = %s\t", s);
// 	printf("c = %s\n", c);
// 	printf("ft_strnstr: %s\n", ft_strnstr(s, c, 30));
// 	printf("strchr result: %s\n", strnstr(s, c, 30));
// 	return (0);
// }
