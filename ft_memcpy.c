/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:35:59 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/12/08 12:17:35 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*temp_dest;
	const unsigned char	*temp_s;

	temp_s = (unsigned char *) src;
	temp_dest = (unsigned char *) dst;
	if (n == 0)
		return (dst);
	if (src == NULL && dst == NULL)
		return (dst);
	while (n > 0)
	{
		*(temp_dest++) = *(temp_s++);
		n--;
	}
	return (dst);
}

// int	main(void)
// {
// 	//char source[] = "Hello, World!";
// 	//char dest[20];

// 	printf("ft_memcpy result: %s\n", ft_memcpy(((void *)0), ((void *)0), 3));
// 	//printf("memcpy result: %s\n", memcpy(dest, source, 13));
// 	return (0);
// }
