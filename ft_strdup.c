/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:20:36 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/12/09 14:08:33 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ns;
	size_t	i;

	i = 0;
	ns = (char *) malloc(ft_strlen(s1) + 1);
	if (!(ns))
		return (NULL);
	while (s1[i])
	{
		ns[i] = s1[i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}

// int main(void)
// {
// 	char source[] = "GeeksForGeeks";
// 	char ss[] = "GeeksForGeeks";

// 	char *target = strdup(source);
// 	printf("Result of strdup: %s\n", target);
// 	printf("Result ft_strdup: %s\n", ft_strdup(ss));
// 	return (0);
// }
