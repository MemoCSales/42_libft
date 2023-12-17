/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:54:35 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/12/16 19:24:10 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tail;

	tail = ft_lstlast(*lst);
	if (tail == NULL)
		*lst = new;
	else
		tail->next = new;
}

// void	print_list(t_list *lst)
// {
// 	while (lst != NULL) 
// 	{
// 		printf("%p -> ", lst->content);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// int	main(void)
// {
// 	// Example usage of ft_lstadd_back
// 	t_list *list = NULL;

// 	// Create nodes with content 1, 2, and 3
// 	t_list *node1 = malloc(sizeof(t_list));
// 	node1->content = (int *)1;
// 	node1->next = NULL;

// 	t_list *node2 = malloc(sizeof(t_list));
// 	node2->content = (int *)2;
// 	node2->next = NULL;

// 	t_list *node3 = malloc(sizeof(t_list));
// 	node3->content = (int *)3;
// 	node3->next = NULL;

// 	// Add nodes to the list
// 	ft_lstadd_back(&list, node1);
// 	ft_lstadd_back(&list, node2);
// 	ft_lstadd_back(&list, node3);

// 	// Print the list
// 	printf("Linked List: ");
// 	print_list(list);

// 	return (0);
// }
