/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:10:08 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/12/08 12:16:19 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*temp;

	temp = s;
	while (n > 0)
	{
		*(temp++) = 0;
		n--;
	}
}

// int	main(void)
// {
// 	char	number[5];
// 	size_t	elements;
// 	int		i;

// 	elements = 5;
// 	i = 0;
// 	ft_bzero(number, 0);
// 	printf("bzero array: ");
// 	while (i < (int)elements)
// 	{
// 		printf("%d ", number[i]);
// 		i++;
// 	}
// }
