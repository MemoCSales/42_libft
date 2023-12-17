/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:32:15 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/12/15 20:36:35 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < n && (str1[i] || str2[i]))
	{
		if (str1[i] == str2[i])
			i++;
		else if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	return (0);
}

// int	main(void)
// {
// 	char str1[] = "atoms\300\0\0\0";
// 	char str2[] = "atomsaabc";

// 	printf("First string: %s\t", str1);
// 	printf("Second string: %s\n", str2);
// 	printf("strncmp result: %d\n", strncmp(str1, str2, 8));
// 	printf("ft_strncmp result: %d\n", ft_strncmp(str1, str2, 8));
// }
