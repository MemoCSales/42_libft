/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:29:20 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/12/08 12:17:47 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		i;

	i = 0;
	ch = (char) c;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == ch)
		return ((char *) &s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char	s[] = "Hello";
// 	char	c = 'e';

// 	printf("s = %s\t", s);
// 	printf("c = %c\n", c);
// 	printf("ft_strchr =%s\n", ft_strchr(s, c));
// 	printf("strchr result: %s\n", strchr(s, c));
// 	return (0);
// }
