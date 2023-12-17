/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:32:29 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/12/08 12:18:13 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*ss;
	int		i;

	i = 0;
	ss = NULL;
	ch = (char) c;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			ss = (char *) &s[i];
		i++;
	}
	if (s[i] == ch)
		return ((char *) &s[i]);
	return (ss);
}

// int	main(void)
// {
// 	char	s[] = "Hola a todas las amigas";
// 	char	c = 'a';

// 	printf("s = %s\t", s);
// 	printf("c = %c\n", c);
// 	printf("Result of ft_strrchr =%s\n", ft_strrchr(s, c));
// 	printf("Result of strrchr =%s\n", strrchr(s, c));
// 	return (0);
// }
