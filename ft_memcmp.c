/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:28:31 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/12/08 12:17:32 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	i = 0;
	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	while (i < n)
	{
		if (ss1[i] == ss2[i])
			i++;
		else if (ss1[i] < ss2[i])
			return (ss1[i] - ss2[i]);
		else if (ss1[i] > ss2[i])
			return (ss1[i] - ss2[i]);
	}
	return (0);
}

// int	main(void)
// {
// 	char str1[] = "abcdE";
// 	char str2[] = "abCde";

// 	printf("First string: %s\t", str1);
// 	printf("Second string: %s\n", str2);
// 	printf("memcmp result: %d\n", memcmp(str1, str2, 3));
// 	printf("ft_memcmp result: %d\n", ft_memcmp(str1, str2, 3));
// }
