/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:30:05 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/12/08 12:17:43 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;
	size_t			i;

	temp = b;
	i = 0;
	while (i < len)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	number[5];
// 	char	str[10];
// 	size_t	elements;
// 	int		i;

// 	elements = 5;
// 	ft_memset(number, 42, elements * sizeof(int));
// 	i = 0;
// 	printf("Modified array: ");
// 	while (i < (int)elements)
// 	{
// 		printf("%d ", number[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	printf("ft_memset result: %s\n", ft_memset(str, 'A', 5));
// 	printf("memset result: %s\n", memset(str, 'A', 5));
// 	return (0);
// }
