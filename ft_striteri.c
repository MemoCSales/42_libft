/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:09:38 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/12/17 12:26:39 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (s || f)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// void	function(unsigned int i, char *str)
// {
// 	printf("Index [%d] -> character: %c\n", i, *str);
// }

// int	main(void)
// {
// 	char str[12] = "hello world";
// 	ft_striteri(str, function);
// 	return 0;
// }
