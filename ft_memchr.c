/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:01:08 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/12/08 12:17:27 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned char	cc;
	size_t			i;

	i = 0;
	ss = (unsigned char *) s;
	cc = (unsigned char) c;
	while (i < n)
	{
		if (ss[i] == cc)
			return ((void *) &ss[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	s[] = "Hola a todas las amigas";
// 	char	c = 'a';
// 	int		n = 1;

// 	printf("s = %s\t", s);
// 	printf("c = %c\n", c);
// 	printf("Result of ft_memchr =%s\n", ft_memchr(s, c, n));
// 	printf("Result of memchr =%s\n", memchr(s, c, n));
// 	return (0);
// }
