/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:39:38 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/12/08 12:18:48 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = malloc(count * size);
	i = 0;
	if (!(tmp))
		return (NULL);
	while (i < size * count)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}

// int	main(void)
// {
// 	int		i;
// 	int		*array;

// 	i = 0;
// 	array = ft_calloc(100, sizeof(int));
// 	while (i < 100)
// 	{
// 		printf("i[%d]: %d ",i, array[i]);
// 		i++;
// 	}
// 	free(array);
// 	printf("\n");
// }
